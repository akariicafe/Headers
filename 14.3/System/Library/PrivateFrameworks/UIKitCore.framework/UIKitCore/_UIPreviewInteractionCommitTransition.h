@class UIViewController, UIWindow;

@interface _UIPreviewInteractionCommitTransition : NSObject

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIWindow *currentCommitEffectWindow;

- (void).cxx_destruct;
- (BOOL)_shouldReduceMotion;
- (id)_preferredTransitionAnimatorForReducedMotion;
- (id)_preferredTransitionAnimator;
- (void)_applyCommitEffectTransformToView:(id)a0;
- (void)performTransitionWithPresentationBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithPresentedViewController:(id)a0;

@end
