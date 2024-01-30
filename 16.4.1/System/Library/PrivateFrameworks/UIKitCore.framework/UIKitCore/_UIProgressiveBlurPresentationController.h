@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;

- (id)_preferredAnimationControllerForDismissal;
- (long long)presentationStyle;
- (void)dismissalTransitionWillBegin;
- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (void).cxx_destruct;
- (void)_animateWithCoordinator:(id)a0 isPresenting:(BOOL)a1;
- (void)_configureSubviews;

@end
