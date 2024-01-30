@class PLVolumeInfo, PLPhotoLibrary, PLLazyObject, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PLManagedAssetRecoveryManager : NSObject {
    PLVolumeInfo *_volumeInfo;
    unsigned long long _fixedCount;
    unsigned long long _totalCount;
    unsigned long long _totalDownloadedResourceBytes;
    unsigned long long _resourceDownloadBytesLimit;
    NSMutableArray *_recoveryErrors;
    PLLazyObject *_imageClient;
    PLLazyObject *_videoClient;
}

@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PLPhotoLibrary *syncablePhotoLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long state;

+ (id)_predicateForAdjustedAssetsWithMissingResources;
+ (id)_irisesWithZeroVideoCpDuration;
+ (id)_predicateForAdjustedAssetsFailedDeferredRendering;
+ (id)_assetsWithJPGFilenameAndRawPrimaryImageResourcePredicate;
+ (id)_imagesWithZeroWidthHeightPredicate;

- (void).cxx_destruct;
- (void)startRecoveryUsingCloudPhotoLibraryManager:(id)a0 transaction:(id)a1 shouldIdentifyInconsistentAssets:(BOOL)a2;
- (void)identifyAssetsWithInconsistentCloudState;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_startRecoveryUsingCloudPhotoLibraryManager:(id)a0 transaction:(id)a1;
- (void)_setCloudRecoveryState:(unsigned long long)a0 forAssetsWithFetchRequestPredicate:(id)a1 resultsFilterPredicate:(id)a2;
- (id)_loadObjectWithObjectID:(id)a0 managedObjectContext:(id)a1;
- (id)_recoveryStatesToProcessForAttributes:(id)a0;
- (void)_recoverNextAssetWithEnumerator:(id)a0 cloudPhotoLibraryManager:(id)a1 transaction:(id)a2;
- (void)_recoverNextRecoveryState:(id)a0 forAsset:(id)a1 cloudPhotoLibraryManager:(id)a2 completionBlock:(id /* block */)a3;
- (void)_performAssetRecoveryTaskForInconsistentState:(id)a0 state:(unsigned long long)a1 cloudPhotoLibraryManager:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)_fixRawUTIForAsset:(id)a0 error:(id *)a1;
- (void)_downloadResources:(id)a0 forAsset:(id)a1 usingCloudPhotoLibraryManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)_fixDimensionsForAsset:(id)a0 cloudPhotoLibraryManager:(id)a1 completionBlock:(id /* block */)a2;
- (void)_fixOriginalAssetDimensionsForAsset:(id)a0 cloudPhotoLibraryManager:(id)a1 completionBlock:(id /* block */)a2;
- (void)_fixIrisWithZeroVideoComplementDuration:(id)a0 cloudPhotoLibraryManager:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)_fixIrisWithZeroVideoComplementDuration:(id)a0 usingExistingVideoComplementAtPath:(id)a1 error:(id *)a2;
- (void)_performTransactionOnLibrary:(id)a0 withObjectID:(id)a1 usingBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)_fixMissingFullSizeAdjustedResources:(id)a0 cloudPhotoLibraryManager:(id)a1 recoveryState:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)_generateMissingFullSizeAdjustedResourcesForAsset:(id)a0 recipesToGenerate:(id)a1 cloudPhotoLibraryManager:(id)a2 recoveryState:(unsigned long long)a3 completionBlock:(id /* block */)a4;

@end
