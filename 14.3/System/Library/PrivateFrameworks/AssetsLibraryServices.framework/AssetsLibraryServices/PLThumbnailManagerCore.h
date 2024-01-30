@class NSMutableDictionary, NSArray, PLPhotoLibraryPathManager, NSLock;
@protocol PLThumbPersistenceManager;

@interface PLThumbnailManagerCore : NSObject {
    NSMutableDictionary *_thumbnailConfigurationDict;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    NSLock *_thumbManagersLock;
    id<PLThumbPersistenceManager> _lastUsedThumbManager;
    unsigned short _lastUsedThumbManagerFormatID;
    NSArray *_fastImageTables;
}

@property (readonly) NSMutableDictionary *thumbManagersByFormat;
@property (readonly) PLPhotoLibraryPathManager *pathManager;

+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)a0;
+ (id)supportedThumbnailFormatIDs;

- (void).cxx_destruct;
- (void)dealloc;
- (id)supportedTableFormats;
- (id)_thumbManagerForFormatID:(unsigned short)a0;
- (id)thumbManagerForFormatID:(unsigned short)a0 thumbFileManagerClass:(Class)a1;
- (id)fastThumbPersistenceManagers;
- (id)imageTableSpecifications;
- (BOOL)useImageTableForFormat:(unsigned short)a0;
- (void)stampThumbnailConfigurationToFile:(BOOL)a0;
- (int)thumbnailVersionCurrent;
- (id)thumbnailConfigurationDict;
- (id)thumbnailConfigurationPath;
- (id)initWithPhotoLibraryPathManager:(id)a0;

@end
