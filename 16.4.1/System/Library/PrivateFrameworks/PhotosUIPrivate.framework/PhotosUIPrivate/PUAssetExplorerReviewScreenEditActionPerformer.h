@protocol PUPhotoEditViewControllerSessionDelegate, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer

@property (retain, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider;
@property (weak, nonatomic) id<PUPhotoEditViewControllerSessionDelegate> photoDelegate;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_presentEditViewControllerForReviewAsset:(id)a0;

@end
