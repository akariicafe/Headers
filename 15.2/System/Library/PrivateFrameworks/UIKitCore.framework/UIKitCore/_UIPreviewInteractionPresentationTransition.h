@class NSString, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_presentationAnimator;
    double _interactiveTransitionFraction;
    BOOL _shouldPerformAsDismissTransition;
    BOOL _didScheduleFinishTransition;
    BOOL _didScheduleCancelTransition;
}

@property (readonly, nonatomic) double interactiveTransitionFraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (void)startInteractiveTransition:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)updateInteractiveTransition:(double)a0;
- (void)cancelTransition;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void).cxx_destruct;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForViewController:(id)a0;
- (void)finishTransition;
- (id)init;
- (void)_performFinishTransition;
- (void)_performCancelTransition;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (id)_newPushDecayAnimator;
- (id)_previewPresentationControllerForTransitionContext:(id)a0;
- (void)_applyPushDecayEffectTransformToView:(id)a0;
- (BOOL)_shouldReduceMotion;
- (void)animationEnded:(BOOL)a0;
- (double)interactiveTransitionFraction;

@end
