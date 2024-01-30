@class AXAssetController, NSString, AXPhoenixAssetPolicy, AXAsset;
@protocol AXPhoenixAssetMonitorDelegate;

@interface AXPhoenixAssetMonitor : NSObject <AXAssetControllerObserver>

@property (retain, nonatomic) AXAssetController *assetController;
@property (retain, nonatomic) AXPhoenixAssetPolicy *assetPolicy;
@property (retain, nonatomic) AXAsset *latestAsset;
@property (weak, nonatomic) id<AXPhoenixAssetMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetDidUpdate;

@end
