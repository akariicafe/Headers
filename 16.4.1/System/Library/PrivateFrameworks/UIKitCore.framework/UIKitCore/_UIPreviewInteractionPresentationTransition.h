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
- (void)animationEnded:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)cancelTransition;
- (void)updateInteractiveTransition:(double)a0;
- (id)init;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void).cxx_destruct;
- (void)_applyPushDecayEffectTransformToView:(id)a0;
- (id)_newPushDecayAnimator;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (void)_performCancelTransition;
- (void)_performFinishTransition;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForTransitionContext:(id)a0;
- (id)_previewPresentationControllerForViewController:(id)a0;
- (BOOL)_shouldReduceMotion;
- (void)finishTransition;
- (double)interactiveTransitionFraction;

@end
