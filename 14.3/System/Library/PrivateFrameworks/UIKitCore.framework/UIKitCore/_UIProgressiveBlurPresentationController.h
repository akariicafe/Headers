@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;

- (id)_preferredAnimationControllerForDismissal;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (void)_configureSubviews;
- (void)_animateWithCoordinator:(id)a0 isPresenting:(BOOL)a1;
- (BOOL)_forcesPreferredAnimationControllers;
- (id)_preferredAnimationControllerForPresentation;

@end
