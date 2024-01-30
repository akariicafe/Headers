@protocol PUPhotoMarkupViewControllerObserver, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer

@property (retain, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider;
@property (weak, nonatomic) id<PUPhotoMarkupViewControllerObserver> markupObserver;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_presentMarkupViewControllerForReviewAsset:(id)a0;

@end
