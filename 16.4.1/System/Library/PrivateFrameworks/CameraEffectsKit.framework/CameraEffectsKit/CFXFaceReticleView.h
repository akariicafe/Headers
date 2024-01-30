@class UISelectionFeedbackGenerator, UIImageView, UIViewPropertyAnimator, NSMutableArray;

@interface CFXFaceReticleView : UIView

@property (nonatomic) BOOL isShowingFaceIndicator;
@property (retain, nonatomic) UIImageView *reticleImageView;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL canPerformFadeInAnimations;
@property (nonatomic) BOOL canPerformFadeOutAnimations;
@property (retain, nonatomic) UIViewPropertyAnimator *bounceAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *animojiBounceAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *animojiFadeOutAnimator;
@property (retain, nonatomic) NSMutableArray *reticleLayersToAnimate;

- (void).cxx_destruct;
- (void)fadeOutAnimationWithCompletion:(id /* block */)a0;
- (void)fadeInAnimation;
- (void)animojiCloseAnimationWithCompletion:(id /* block */)a0;
- (void)animojiFadeInAnimation;
- (void)fadeOutAndEndHapticWithCompletionBlock:(id /* block */)a0;
- (void)hideAnimojiFaceReticleAnimatedWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reticleType:(long long)a1;
- (void)setupAnimojiReticleLayers;
- (void)shouldUseHapticFeedback:(BOOL)a0;
- (void)showAndAnimateAnimojiFaceReticle;
- (void)updateFrameForDisplayRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)userFeedbackForTrackingType:(long long)a0 needsHaptics:(BOOL)a1;

@end
