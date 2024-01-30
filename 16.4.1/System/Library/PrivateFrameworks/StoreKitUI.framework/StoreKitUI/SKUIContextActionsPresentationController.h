@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (copy, nonatomic) id /* block */ dismissalAnimations;

- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldRemovePresentersView;

@end
