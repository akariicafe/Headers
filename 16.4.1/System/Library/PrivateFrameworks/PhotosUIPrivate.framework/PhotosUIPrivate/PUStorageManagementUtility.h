@class NSNumber, PHPhotoLibrary;

@interface PUStorageManagementUtility : NSObject {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) BOOL isCPLEnabled;
@property (readonly, nonatomic) BOOL isCPLInExitMode;
@property (readonly, nonatomic) BOOL shouldHideCPL;
@property (readonly, nonatomic) BOOL isDeletableItemsInTrash;
@property (readonly, nonatomic) NSNumber *sizeForRecentlyDeletedItems;
@property (readonly, nonatomic) NSNumber *sizeForTrashedSpatialOvercaptureResources;
@property (readonly, nonatomic) BOOL isOptimizedModeOn;
@property (readonly, nonatomic) unsigned long long totalReclaimableSizeFromPurgingVideoClips;

+ (id)stringWithSizeUnitForValue:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_assetsInTrash;
- (id)_assetsWithSpatialOvercaptureResources;
- (id)_defaultVideoAssetFetchOptionsWithSortOrder:(BOOL)a0 fetchLimit:(unsigned long long)a1 minimumFileSize:(unsigned long long)a2;
- (id)_deleteableVideoAssets;
- (void)enableCPLWithCompletionBlock:(id /* block */)a0;
- (void)enableOptimizedMode:(BOOL)a0;
- (void)expungeRecentlyDeletedItemsWithCompletionBlock:(id /* block */)a0;
- (void)expungeTrashedSpatialOverCaptureResourcesWithCompletionBlock:(id /* block */)a0;
- (id)fetchVideoAssetsBySizeWithSortOrder:(BOOL)a0;
- (void)purgeableSizeAndOriginalsInLibrary:(id /* block */)a0;
- (id)significantItems;

@end
