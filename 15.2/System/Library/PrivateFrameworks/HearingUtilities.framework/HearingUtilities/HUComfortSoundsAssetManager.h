@class AXAssetController, NSArray, NSMutableDictionary, NSString;
@protocol HUComfortSoundsAssetManagerDelegate;

@interface HUComfortSoundsAssetManager : NSObject <AXAssetControllerObserver>

@property (retain, nonatomic) AXAssetController *assetController;
@property (retain, nonatomic) NSArray *availableAssets;
@property (retain, nonatomic) NSMutableDictionary *assetDownloadProgress;
@property (weak, nonatomic) id<HUComfortSoundsAssetManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetController:(id)a0 asset:(id)a1 downloadProgressTotalWritten:(long long)a2 totalExpected:(long long)a3 isStalled:(BOOL)a4 expectedTimeRemaining:(double)a5;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishPurgingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (id)assetWithId:(id)a0;
- (void)downloadAssetWithId:(id)a0;
- (void)removeAssetWithId:(id)a0;

@end
