@class PLVolumeInfo, PLLazyObject, PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLManagedAssetRecoveryManager : NSObject {
    PLVolumeInfo *_volumeInfo;
    unsigned long long _fixedCount;
    unsigned long long _totalCount;
    unsigned long long _totalDownloadedResourceBytes;
    unsigned long long _resourceDownloadBytesLimit;
    NSMutableArray *_recoveryErrors;
    PLLibraryServicesManager *_lsm;
    PLLazyObject *_imageClient;
    PLLazyObject *_videoClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long state;

+ (id)_predicateForAdjustedAssetsFailedDeferredRendering;
+ (id)_imagesWithZeroWidthHeightPredicate;
+ (id)_irisesWithZeroVideoCpDuration;
+ (id)_predicateForAdjustedAssetsWithMissingResources;
+ (id)_assetsWithJPGFilenameAndRawPrimaryImageResourcePredicate;

- (void)_startRecoveryUsingCloudPhotoLibraryManager:(id)a0 transaction:(id)a1;
- (void)_setCloudRecoveryState:(unsigned long long)a0 forAssetsWithFetchRequestPredicate:(id)a1 resultsFilterPredicate:(id)a2 usingNonSyncableLibrary:(id)a3;
- (id)_recoveryStatesToProcessForAttributes:(id)a0;
- (id)_loadObjectWithObjectID:(id)a0 managedObjectContext:(id)a1;
- (void)_recoverNextAssetWithEnumerator:(id)a0 cloudPhotoLibraryManager:(id)a1 transaction:(id)a2 usingNonSyncableLibrary:(id)a3 andSyncableLibrary:(id)a4;
- (void)_recoverNextRecoveryState:(id)a0 forAsset:(id)a1 cloudPhotoLibraryManager:(id)a2 usingSyncableLibrary:(id)a3 completionBlock:(id /* block */)a4;
- (void)_fixDimensionsForAsset:(id)a0 cloudPhotoLibraryManager:(id)a1 completionBlock:(id /* block */)a2;
- (void)_performAssetRecoveryTaskForInconsistentState:(id)a0 state:(unsigned long long)a1 cloudPhotoLibraryManager:(id)a2 usingSyncableLibrary:(id)a3 completionBlock:(id /* block */)a4;
- (void)_downloadResources:(id)a0 forAsset:(id)a1 usingCloudPhotoLibraryManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)_fixOriginalAssetDimensionsForAsset:(id)a0 cloudPhotoLibraryManager:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)_fixRawUTIForAsset:(id)a0 error:(id *)a1;
- (void)startRecoveryUsingCloudPhotoLibraryManager:(id)a0 transaction:(id)a1 shouldIdentifyInconsistentAssets:(BOOL)a2;
- (void).cxx_destruct;
- (void)_fixIrisWithZeroVideoComplementDuration:(id)a0 cloudPhotoLibraryManager:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)_fixIrisWithZeroVideoComplementDuration:(id)a0 usingExistingVideoComplementAtPath:(id)a1 error:(id *)a2;
- (void)_performTransactionOnLibrary:(id)a0 withObjectID:(id)a1 usingBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)_fixMissingFullSizeAdjustedResources:(id)a0 cloudPhotoLibraryManager:(id)a1 recoveryState:(unsigned long long)a2 usingSyncableLibrary:(id)a3 completionBlock:(id /* block */)a4;
- (void)_generateMissingFullSizeAdjustedResourcesForAsset:(id)a0 recipesToGenerate:(id)a1 cloudPhotoLibraryManager:(id)a2 recoveryState:(unsigned long long)a3 usingSyncableLibrary:(id)a4 completionBlock:(id /* block */)a5;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)identifyAssetsWithInconsistentCloudState;

@end
