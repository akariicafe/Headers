@class _UIClickPresentation, NSString, UIView, UITargetedPreview, UIViewController;

@interface _UIRapidClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting> {
    int _animationCount;
    BOOL _isInteractionInitiatedDismiss;
}

@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) UIViewController *stashedParentViewController;
@property (retain, nonatomic) UIView *stashedSuperView;
@property (retain, nonatomic) id keyboardSuppressionAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIClickPresentation *presentation;
@property (copy, nonatomic) id /* block */ lifecycleCompletion;

- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;
- (void)_animateDismissalWithReason:(unsigned long long)a0 actions:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_animateUsingFluidSpringWithType:(unsigned long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_nonAnimatedDismissalWithReason:(unsigned long long)a0 actions:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_performPresentationAnimationsFromViewController:(id)a0;
- (void)_stashParentViewControllerIfNecessary;
- (void)dismissWithReason:(unsigned long long)a0 alongsideActions:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithClickPresentation:(id)a0;
- (void)presentFromSourcePreview:(id)a0 lifecycleCompletion:(id /* block */)a1;

@end
