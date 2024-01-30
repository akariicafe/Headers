@class AXAssetController, NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver> {
    NSMutableArray *_observers;
    AXAssetController *_assetController;
    NSMutableDictionary *_assetsTotalBytesWritten;
    NSMutableDictionary *_assetsTotalTimeExpected;
    NSMutableDictionary *_assetDownloadStalled;
    NSMutableDictionary *_cachedAssets;
    NSDictionary *_modelMap;
}

@property (nonatomic) long long previousReportedSize;
@property (nonatomic) long long expectedDownloadSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_reset;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)run;
- (void).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetController:(id)a0 asset:(id)a1 downloadProgressTotalWritten:(long long)a2 totalExpected:(long long)a3 isStalled:(BOOL)a4 expectedTimeRemaining:(double)a5;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishPurgingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (long long)assetStatus;
- (void)downloadAssets;
- (void)initializeModelMap;
- (void)notifyAssetsNotReady;
- (long long)totalBytesOfAllAssetsWritten;
- (long long)totalExpectedTimeOfAllAssets;
- (BOOL)isAssetDownloadStalled;
- (void)notifyDownloadProgress:(long long)a0 totalSizeExpected:(long long)a1 totalRemainingTime:(double)a2 isStalled:(BOOL)a3;
- (void)notifyAssetsReady;
- (void)notifyAssetsState;
- (id)soundDetectionTypeForString:(id)a0;
- (void)cacheAsset:(id)a0;
- (void)updateDownloadingAsset:(id)a0 totalBytesWritten:(long long)a1 isStalled:(BOOL)a2 expectedTimeRemaining:(double)a3;
- (id)localURLForDetector:(id)a0;
- (long long)totalSizeOccupied;
- (long long)totalSizeExpected;

@end
