@class ICCameraFolder, ICCameraDevice, NSString, NSMutableDictionary, NSDate, NSDictionary;

@interface ICCameraItem : NSObject

@property (nonatomic) unsigned long long privMetadataState;
@property (nonatomic) unsigned long long privThumbnailState;
@property (retain, nonatomic) ICCameraDevice *device;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSString *UTI;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSMutableDictionary *userData;
@property (nonatomic) unsigned int objectHandle;
@property (copy, nonatomic) NSString *fileSystemPath;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=isRaw) BOOL raw;
@property (readonly, nonatomic) unsigned long long unsignedIntegerValue;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ completionBlock_deprecated;
@property (copy) id /* block */ downloadCompletionBlock;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long ownerID;
@property (readonly) unsigned long long twinID;
@property (readonly) unsigned long long objectID;
@property (readonly) BOOL hasThumbnail;
@property (readonly) BOOL hasMetadata;
@property (retain) id userObject;
@property (retain, nonatomic) ICCameraFolder *parentFolder;
@property (readonly) NSString *relativeFileSystemPath;
@property (readonly) unsigned long long metadataState;
@property (readonly) unsigned long long thumbnailState;
@property (readonly, nonatomic, getter=isInTemporaryStore) BOOL inTemporaryStore;
@property (readonly, nonatomic) struct CGImage { } *thumbnail;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) unsigned int ptpObjectHandle;
@property (readonly, nonatomic, getter=wasAddedAfterContentCatalogCompleted) BOOL addedAfterContentCatalogCompleted;
@property (readonly) struct CGImage { } *thumbnailIfAvailable;
@property (readonly) struct CGImage { } *largeThumbnailIfAvailable;
@property (readonly) NSDictionary *metadataIfAvailable;

- (id)valueForUndefinedKey:(id)a0;
- (void)setObjectID:(unsigned long long)a0;
- (id)fileSystemPath;
- (id)description;
- (void)setParentID:(unsigned long long)a0;
- (void)flushMetadataCache;
- (void)dealloc;
- (id)initWithName:(id)a0 parentFolder:(id)a1 device:(id)a2;
- (void)setTwinID:(unsigned long long)a0;
- (long long)compareCameraItem:(id)a0;
- (void)setThumbnailState:(unsigned long long)a0;
- (void)setOwnerID:(unsigned long long)a0;
- (void)setMetadataState:(unsigned long long)a0;
- (void)flushThumbnailCache;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)appendToPath:(id)a0;

@end
