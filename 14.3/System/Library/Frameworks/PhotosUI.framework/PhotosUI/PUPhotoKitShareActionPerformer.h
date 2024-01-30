@class UIViewController, PUActivitySharingController;

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) UIViewController *preheatedSharingViewController;
@property (retain, nonatomic) PUActivitySharingController *activitySharingController;

+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void)preheatUserInteractionTask;
- (void).cxx_destruct;
- (id)_createSharingViewControllerFromCurrentSelection;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)a0 inDataSource:(id)a1;

@end
