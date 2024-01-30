@class NSSet, PUAssetPickerCoordinator, NSString, PXLoadingStatusManager, PHAssetCollection, UIViewController;
@protocol PUStoryAssetPickerHelperDelegate, PXDisplayAssetCollection;

@interface PUStoryAssetPickerHelper : NSObject <PUAssetPickerCoordinatorActionHandler>

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSSet *preselectedOIDs;
@property (readonly, nonatomic) PUAssetPickerCoordinator *pickerCoordinator;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> containerCollection;
@property (readonly, nonatomic) UIViewController *pickerViewController;
@property (weak, nonatomic) id<PUStoryAssetPickerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)coordinator:(id)a0 didFinishPicking:(id)a1 downscalingTargetDimension:(id)a2;
- (id)initWithContainerAssetCollection:(id)a0 preselectedAssets:(id)a1;

@end
