@class NSString, NSMutableDictionary, SBSceneViewAppIconView, UIView, SBApplicationBlurSnapshotGenerationContainerView;

@interface SBApplicationBlurContentView : UIView {
    NSString *_bundleIdentifier;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToCompletionBlocks;
    struct CGSize { double width; double height; } _targetViewOriginalSize;
    UIView *_targetViewToBlur;
    UIView *_unblurredRealSnapshotView;
    UIView *_unblurredCopySnapshotView;
    UIView *_liveBlurView;
    UIView *_blurredSnapshotView;
    id /* block */ _snapshotBlock;
    SBApplicationBlurSnapshotGenerationContainerView *_snapshotGenerationContainerView;
    UIView *_blurView;
}

@property (readonly, nonatomic) SBSceneViewAppIconView *iconView;
@property (nonatomic) double iconViewScale;
@property (nonatomic) double blurDelay;

- (void)layoutSubviews;
- (void)_setState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bundleIdentifier:(id)a1 targetViewToBlur:(id)a2 initialIconScale:(double)a3;
- (void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bundleIdentifier:(id)a1 targetViewToBlur:(id)a2;
- (void)generateBlurredSnapshotWithCompletion:(id /* block */)a0;
- (void)animateToBlurredSnapshotWithFactory:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bundleIdentifier:(id)a1 icon:(id)a2 targetViewToBlur:(id)a3 initialIconScale:(double)a4 targetViewSnapshotProviderBlock:(id /* block */)a5;
- (void)_fireCompletionBlocksForState:(unsigned long long)a0;
- (void)_addCompletionBlock:(id /* block */)a0 forState:(unsigned long long)a1;
- (void)_doBlurGenerationWithCompletion:(id /* block */)a0;
- (void)_doAnimationToBlurredSnapshotWithFactory:(id)a0 completion:(id /* block */)a1;

@end
