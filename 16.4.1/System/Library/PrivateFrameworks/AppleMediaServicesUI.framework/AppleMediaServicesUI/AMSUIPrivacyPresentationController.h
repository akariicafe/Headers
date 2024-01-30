@class NSString, UIView;

@interface AMSUIPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillLayoutSubviews;
- (long long)adaptivePresentationStyle;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (void)_prepareDimmingViewIfNecessary;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldRemovePresentersView;

@end
