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

+ (id)tableThumbnailFormatsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (id)_thumbnailFormatsFromIDs:(id)a0;
+ (BOOL)isSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)a0;
+ (BOOL)isMissingThumbnailTablesWithPathManager:(id)a0;
+ (id)_generateUncompressedImageTableSpecificationsForRunningConfigWithPathManager:(id)a0;
+ (void)markThumbnailConfigurationForTableOnlyRebuildForThumbnailConfigDict:(id)a0;
+ (BOOL)wantsTableOnlyRebuildForThumbnailConfigDict:(id)a0;
+ (id)uncompressedImageTableSpecificationsWithPathManager:(id)a0;
+ (BOOL)hasThumbnailConfigMismatchWithPathManager:(id)a0 comparedToConfigPhase:(long long)a1;
+ (void)invalidateCachedConfig;
+ (id)thumbnailFormatIDsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (id)_formatIDsForIthmbFilesWithPathManager:(id)a0;
+ (void)markThumbnailConfigurationTableOnlyRebuildFinishedForThumbnailConfigDict:(id)a0;
+ (void)stampThumbnailConfiguration:(id)a0 toFile:(BOOL)a1 withPathManager:(id)a2;
+ (id)_configurationThumbnailFormatIDsWithPathManager:(id)a0;
+ (id)thumbnailFormatsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (void)invalidateIsSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)a0;
+ (id)thumbnailConfigurationDictWithPathManager:(id)a0;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)a0;
+ (int)thumbnailVersionForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (BOOL)_hasTableChangesOnlyFromFormatIDs:(id)a0 toFormatIDs:(id)a1;
+ (void)removeThumbnailTablesUnsupportedOnly:(BOOL)a0 withPathManager:(id)a1;
+ (BOOL)_isSuppressingTargetConfigComparedToSavedConfigForPathManager:(id)a0;
+ (int)configurationThumbnailVersionWithPathManager:(id)a0;
+ (BOOL)_hasTableFormatsAndAllAreCompressedForFormatIDs:(id)a0;
+ (id)thumbnailConfigurationPathWithPathManager:(id)a0;
+ (long long)requiredThumbnailResetTypeWithPathManager:(id)a0 comparedToConfigPhase:(long long)a1;
+ (id)_generateTableFormatsFromFormatIDs:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)fastThumbPersistenceManagers;
- (id)initWithPhotoLibraryPathManager:(id)a0;
- (id)thumbManagerForFormatID:(unsigned short)a0 thumbFileManagerClass:(Class)a1 readOnly:(BOOL)a2;
- (id)_thumbManagerForFormatID:(unsigned short)a0;

@end
