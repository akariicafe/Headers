@class AXAssetController, AXVoiceTriggerAssetPolicy, NSString, AXAsset;
@protocol AXSDVoiceTriggerAssetManagerDelegate;

@interface AXSDVoiceTriggerAssetManager : NSObject <AXAssetControllerObserver>

@property (retain, nonatomic) AXAssetController *assetController;
@property (retain, nonatomic) AXVoiceTriggerAssetPolicy *assetPolicy;
@property (retain, nonatomic) AXAsset *latestDownloadedAsset;
@property (weak, nonatomic) id<AXSDVoiceTriggerAssetManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetDidUpdateWithError:(id)a0;

@end
