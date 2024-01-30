@class NSNumber;

@interface PUStorageManagementUtility : NSObject

@property (class, readonly, nonatomic) BOOL isCPLEnabled;
@property (class, readonly, nonatomic) BOOL isCPLInExitMode;
@property (class, readonly, nonatomic) BOOL shouldHideCPL;
@property (class, readonly, nonatomic) BOOL isDeletableItemsInTrash;
@property (class, readonly, nonatomic) NSNumber *sizeForRecentlyDeletedItems;
@property (class, readonly, nonatomic) NSNumber *sizeForTrashedSpatialOvercaptureResources;
@property (class, readonly, nonatomic) BOOL isOptimizedModeOn;
@property (class, readonly, nonatomic) unsigned long long totalReclaimableSizeFromPurgingVideoClips;

+ (void)purgeableSizeAndOriginalsInLibrary:(id /* block */)a0;
+ (id)_assetsInTrash;
+ (id)_assetsWithSpatialOvercaptureResources;
+ (void)enableOptimizedMode:(BOOL)a0;
+ (void)enableCPLWithCompletionBlock:(id /* block */)a0;
+ (void)expungeRecentlyDeletedItemsWithCompletionBlock:(id /* block */)a0;
+ (void)expungeTrashedSpatialOverCaptureResourcesWithCompletionBlock:(id /* block */)a0;
+ (id)stringWithSizeUnitForValue:(id)a0;
+ (id)_defaultVideoAssetFetchOptionsWithSortOrder:(BOOL)a0 fetchLimit:(unsigned long long)a1 minimumFileSize:(unsigned long long)a2;
+ (id)fetchVideoAssetsBySizeWithSortOrder:(BOOL)a0;
+ (id)_deleteableVideoAssets;
+ (id)significantItems;
+ (BOOL)isCPLInInitialUploadingState;
+ (id)systemPhotoLibrary;

@end
