@class AXAssetController, NSString, NSMutableDictionary, NSMutableArray;

@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver> {
    NSMutableArray *_observers;
    AXAssetController *_assetController;
    NSMutableDictionary *_assetsTotalBytesWritten;
    NSMutableDictionary *_assetsTotalTimeExpected;
    NSMutableDictionary *_assetDownloadStalled;
    NSMutableDictionary *_assetsDownloading;
    NSMutableDictionary *_cachedAssets;
}

@property (nonatomic) long long previousReportedSize;
@property (nonatomic) long long expectedDownloadSize;
@property (retain, nonatomic) NSMutableArray *cachedAXAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)refresh;
- (void)_downloadAssets;
- (void)purgeAssets:(id)a0;
- (void)assetController:(id)a0 asset:(id)a1 downloadProgressTotalWritten:(long long)a2 totalExpected:(long long)a3 isStalled:(BOOL)a4 expectedTimeRemaining:(double)a5;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (BOOL)isAssetCatalogInstalled;
- (BOOL)hasInProgressDownloads;
- (void).cxx_destruct;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishPurgingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (long long)assetStatus;
- (void)downloadAssets:(id)a0;
- (void)_cacheAsset:(id)a0;
- (long long)_expectedCurrentlyDownloadingSize;
- (void)_resetDownloadTracking;
- (long long)_totalBytesOfAllAssetsWritten;
- (long long)_totalExpectedTimeOfAllAssets;
- (void)_updateDownloadingAsset:(id)a0 totalBytesWritten:(long long)a1 isStalled:(BOOL)a2 expectedTimeRemaining:(double)a3;
- (BOOL)isAssetDownloadStalled;
- (BOOL)isKShotAsset:(id)a0;
- (BOOL)isKShotUsingSoundPrint;
- (id)localPathForKShotGeneralApplianceDetector;
- (id)localPathForKShotHallucinator;
- (id)localPathForKShotModelWeights;
- (id)localURLForDetector:(id)a0;
- (void)notifyAssetsNotReady;
- (void)notifyAssetsReady;
- (void)notifyAssetsState;
- (void)notifyDownloadProgress:(long long)a0 totalSizeExpected:(long long)a1 totalRemainingTime:(double)a2 isStalled:(BOOL)a3;
- (void)notifyRefreshAssets:(id)a0 wasSuccessful:(BOOL)a1 error:(id)a2;
- (void)refreshAssetsUpdatingCatalogIfNeeded:(BOOL)a0;
- (void)stopDownloadingAssets;
- (long long)totalSizeExpected;
- (long long)totalSizeOccupied;

@end
