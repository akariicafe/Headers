@class NSArray, NSPersistentStore, NSMutableSet, PLThumbnailCascadingDownscaleContext, NSMutableArray, NSLock;

@interface PLThumbnailManager : PLThumbnailManagerCore {
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    PLThumbnailCascadingDownscaleContext *_downscaleContext;
    BOOL _shouldRebuildThumbnails;
    BOOL _didCheckShouldRebuildThumbnails;
    BOOL _hasExceededThumbnailRebuildRequestLimit;
    BOOL _isRebuildingThumbnails;
    NSPersistentStore *_migrationStore;
}

@property (retain, nonatomic) id observerToken;
@property (retain, nonatomic) NSArray *slowPersistenceManagers;

+ (id)thumbnailIdentifierWithAssetUUID:(id)a0 directory:(id)a1 filename:(id)a2 bundleScope:(unsigned short)a3 pathManager:(id)a4;

- (void)rebuildAllMissingThumbnailsInLibrary:(id)a0;
- (id)imageTableForFormat:(unsigned short)a0;
- (BOOL)setThumbnailsForThumbIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 assetUUID:(id)a2 kind:(short)a3 extension:(id)a4 withImage:(id)a5;
- (BOOL)isRebuildingThumbnails;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)a0 library:(id)a1 error:(id *)a2;
- (id)initWithPhotoLibraryPathManager:(id)a0 storeFromMigration:(id)a1;
- (BOOL)hasMissingThumbnailsInLibrary:(id)a0;
- (id)_rebuildThumbnailsQueue;
- (id)_dataForAsset:(id)a0 format:(unsigned short)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7 imageDataFormat:(unsigned short *)a8;
- (long long)_diskFootprintOfTableThumbnailTables;
- (void)continueRebuildingTableThumbsInLibrary:(id)a0;
- (id)_contextForConfigurationChanges;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (BOOL)_performUncompressedTableDownscaleIntoDatas:(id)a0 image:(id)a1 assetUUID:(id)a2;
- (void)reStampConfigAsNeedingTableThumbMigration;
- (id)indexStatisticsForLibrary:(id)a0;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)removeObsoleteMetadata;
- (struct CGImage { } *)newImageForAsset:(id)a0 format:(id)a1;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)a0;
- (id)thumbnailRebuildIndicatorPath;
- (void).cxx_destruct;
- (id)thumbnailJPEGPathForPhoto:(id)a0;
- (void)setThumbnailsForAsset:(id)a0 withImage:(id)a1;
- (void)_removeMasterThumbDirectories;
- (BOOL)wantsTableOnlyRebuild;
- (void)preheatThumbnailDataWithFormat:(unsigned short)a0 thumbnailIndexes:(id)a1;
- (BOOL)resetThumbnailsWithResetType:(long long)a0 deferHintChanges:(BOOL)a1 inContext:(id)a2;
- (void)removeRebuildThumbnailsRequest:(const char *)a0;
- (id)dataForPhoto:(id)a0 format:(unsigned short)a1 allowPlaceholder:(BOOL)a2 width:(int *)a3 height:(int *)a4 bytesPerRow:(int *)a5 dataWidth:(int *)a6 dataHeight:(int *)a7 imageDataOffset:(int *)a8;
- (BOOL)hasRebuildThumbnailsRequest;
- (BOOL)resetThumbnailsForced:(BOOL)a0 isMissingTables:(BOOL)a1 inContext:(id)a2;
- (void)dealloc;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (void)deleteThumbnailsWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 uuid:(id)a2;
- (void)addRebuildThumbnailsRequest;
- (void)_recordRebuildThumbnailsAttempt;
- (id)placeholderDataForFormat:(unsigned short)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7;
- (id)_missingThumbnailPredicate;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)a0;
- (id)_tableDescriptions;
- (id)thumbManagerForFormatID:(unsigned short)a0;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 image:(id)a2 assetUUID:(id)a3;

@end
