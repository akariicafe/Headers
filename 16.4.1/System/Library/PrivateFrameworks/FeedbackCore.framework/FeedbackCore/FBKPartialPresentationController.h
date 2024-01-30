@class UIView;

@interface FBKPartialPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) double height;

- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (long long)adaptivePresentationStyle;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (void)dismissPresentation:(id)a0;
- (BOOL)isPresentingFullScreen;

@end
