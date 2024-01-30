@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (copy, nonatomic) id /* block */ dismissalAnimations;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldRemovePresentersView;

@end
