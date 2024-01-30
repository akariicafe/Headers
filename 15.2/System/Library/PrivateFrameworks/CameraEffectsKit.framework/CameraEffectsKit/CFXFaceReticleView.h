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
- (void)userFeedbackForTrackingType:(long long)a0 needsHaptics:(BOOL)a1;
- (void)fadeOutAndEndHapticWithCompletionBlock:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reticleType:(long long)a1;
- (void)updateFrameForDisplayRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showAndAnimateAnimojiFaceReticle;
- (void)hideAnimojiFaceReticleAnimatedWithCompletion:(id /* block */)a0;
- (void)setupAnimojiReticleLayers;
- (void)fadeInAnimation;
- (void)fadeOutAnimationWithCompletion:(id /* block */)a0;
- (void)shouldUseHapticFeedback:(BOOL)a0;
- (void)animojiFadeInAnimation;
- (void)animojiCloseAnimationWithCompletion:(id /* block */)a0;

@end
