@class NSArray, NSMutableSet, PLThumbnailCascadingDownscaleContext, NSMutableArray, NSLock;

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
}

@property (retain, nonatomic) id observerToken;
@property (retain, nonatomic) NSArray *slowPersistenceManagers;

+ (id)supportedThumbnailFormats;

- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)a0;
- (void).cxx_destruct;
- (void)addRebuildThumbnailsRequest;
- (unsigned short)_configurationThumbnailFormat;
- (long long)_diskFootprintOfTableThumbnailTables;
- (id)thumbManagerForFormatID:(unsigned short)a0;
- (void)dealloc;
- (BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)a0 toVersion:(int)a1 fromFormat:(int)a2 toFormat:(int)a3;
- (void)removeObsoleteMetadata;
- (BOOL)isMissingThumbnailTables;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (void)deleteThumbnailsWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 uuid:(id)a2;
- (id)initWithPhotoLibraryPathManager:(id)a0 modelMigrator:(id)a1;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 image:(id)a2 assetUUID:(id)a3;
- (id)imageTableForFormat:(unsigned short)a0;
- (BOOL)isRebuildingThumbnails;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)a0 library:(id)a1 error:(id *)a2;
- (BOOL)hasThumbnailVersionMismatch;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (void)setThumbnailsForAsset:(id)a0 withImage:(id)a1;
- (BOOL)setThumbnailsForThumbIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 assetUUID:(id)a2 kind:(short)a3 extension:(id)a4 withImage:(id)a5;
- (BOOL)resetThumbnailsWithModelMigrator:(id)a0;
- (id)thumbnailRebuildIndicatorPath;
- (BOOL)hasRebuildThumbnailsRequest;
- (void)discardCachedThumbnailDownscalerContexts;
- (id)_dataForAsset:(id)a0 format:(unsigned short)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7 imageDataFormat:(unsigned short *)a8;
- (id)_tableDescriptions;
- (BOOL)hasMissingThumbnailsInLibrary:(id)a0;
- (void)_removeMasterThumbDirectories;
- (void)_recordRebuildThumbnailsAttempt;
- (id)placeholderDataForFormat:(unsigned short)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7;
- (int)_configurationThumbnailVersion;
- (id)dataForPhoto:(id)a0 format:(unsigned short)a1 allowPlaceholder:(BOOL)a2 width:(int *)a3 height:(int *)a4 bytesPerRow:(int *)a5 dataWidth:(int *)a6 dataHeight:(int *)a7 imageDataOffset:(int *)a8;
- (BOOL)hasDeprecationsOnly;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)a0;
- (id)_allPossibleThumbnailFormatIDs;
- (void)removeThumbnailTablesUnsupportedOnly:(BOOL)a0;
- (id)_missingThumbnailPredicate;
- (BOOL)_performDownscaleIntoDatas:(id)a0 image:(id)a1 assetUUID:(id)a2;
- (void)preheatThumbnailDataWithFormat:(unsigned short)a0 thumbnailIndexes:(id)a1;
- (BOOL)resetThumbnailsWithModelMigrator:(id)a0 forced:(BOOL)a1;
- (id)_rebuildThumbnailsQueue;
- (void)removeRebuildThumbnailsRequest:(const char *)a0;
- (struct CGImage { } *)newImageForAsset:(id)a0 format:(id)a1;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)a0;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (id)thumbnailJPEGPathForPhoto:(id)a0;

@end
