@class UIViewController, PUActivitySharingController;

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) UIViewController *preheatedSharingViewController;
@property (retain, nonatomic) PUActivitySharingController *activitySharingController;

+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)preheatUserInteractionTask;
- (void)performUserInteractionTask;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)a0 inDataSource:(id)a1;
- (id)_createSharingViewControllerFromCurrentSelection;

@end
