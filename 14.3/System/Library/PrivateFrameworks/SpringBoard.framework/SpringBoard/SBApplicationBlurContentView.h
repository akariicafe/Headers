@class SBDeviceApplicationSceneHandle, NSMutableDictionary, SBSceneViewAppIconView, UIView, SBApplicationBlurSnapshotGenerationContainerView;

@interface SBApplicationBlurContentView : UIView {
    SBDeviceApplicationSceneHandle *_sceneHandle;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToCompletionBlocks;
    struct CGSize { double width; double height; } _targetViewOriginalSize;
    UIView *_targetViewToBlur;
    UIView *_unblurredRealSnapshotView;
    UIView *_unblurredCopySnapshotView;
    UIView *_liveBlurView;
    UIView *_blurredSnapshotView;
    SBApplicationBlurSnapshotGenerationContainerView *_snapshotGenerationContainerView;
    UIView *_blurView;
}

@property (readonly, nonatomic) SBSceneViewAppIconView *iconView;

- (void)_setState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deviceApplicationSceneHandle:(id)a1 targetViewToBlur:(id)a2;
- (void)generateBlurredSnapshotWithCompletion:(id /* block */)a0;
- (void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)a0 completion:(id /* block */)a1;
- (void)animateToBlurredSnapshotWithFactory:(id)a0 completion:(id /* block */)a1;
- (id)_iconViewForApplication;
- (void)_fireCompletionBlocksForState:(unsigned long long)a0;
- (void)_addCompletionBlock:(id /* block */)a0 forState:(unsigned long long)a1;
- (void)_doBlurGenerationWithCompletion:(id /* block */)a0;
- (void)_doAnimationToBlurredSnapshotWithFactory:(id)a0 completion:(id /* block */)a1;

@end
