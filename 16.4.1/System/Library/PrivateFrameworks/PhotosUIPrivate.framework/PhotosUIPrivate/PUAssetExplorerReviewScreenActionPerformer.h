@class PUActivityProgressController;

@interface PUAssetExplorerReviewScreenActionPerformer : PUAssetActionPerformer

@property (retain, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController;
@property (copy, nonatomic) id /* block */ performUserInteractionTaskBlock;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_handleProgressControllerCanceled:(id)a0;
- (void)_handleReviewAssetRequestCompletedWithSuccess:(BOOL)a0 canceled:(BOOL)a1 error:(id)a2 reviewAsset:(id)a3 completionHandler:(id /* block */)a4;
- (id)_setupProgressControllerForProgress:(id)a0;
- (void)_showFailedReviewAssetRequestAlert;
- (void)executePerformUserInteractionTaskBlock;
- (void)requestReviewAssetForDisplayAsset:(id)a0 reviewAssetProvider:(id)a1 completionHandler:(id /* block */)a2;

@end
