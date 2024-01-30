@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;

- (id)_preferredAnimationControllerForDismissal;
- (void)presentationTransitionWillBegin;
- (id)_preferredAnimationControllerForPresentation;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (long long)presentationStyle;
- (void).cxx_destruct;
- (void)_configureSubviews;
- (void)_animateWithCoordinator:(id)a0 isPresenting:(BOOL)a1;
- (BOOL)_forcesPreferredAnimationControllers;

@end
