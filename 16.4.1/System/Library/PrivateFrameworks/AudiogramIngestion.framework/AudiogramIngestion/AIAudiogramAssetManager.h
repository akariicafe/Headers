@class AXAsset, AXAssetController, NSString;
@protocol AIAudiogramAssetManagerDelegate;

@interface AIAudiogramAssetManager : NSObject <AXAssetControllerObserver>

@property (retain, nonatomic) AXAssetController *assetController;
@property (retain, nonatomic) AXAsset *latestDownloadedAsset;
@property (weak, nonatomic) id<AIAudiogramAssetManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assetController:(id)a0 asset:(id)a1 downloadProgressTotalWritten:(long long)a2 totalExpected:(long long)a3 isStalled:(BOOL)a4 expectedTimeRemaining:(double)a5;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)refreshAssets;
- (void)assetDidUpdateWithError:(id)a0;

@end
