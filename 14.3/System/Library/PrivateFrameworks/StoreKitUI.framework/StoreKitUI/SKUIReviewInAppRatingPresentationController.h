@class NSString, UIView;

@interface SKUIReviewInAppRatingPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) BOOL constraintsPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyle;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)containerViewWillLayoutSubviews;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (void)containerViewDidLayoutSubviews;
- (void)_prepareDimmingViewIfNecessary;
- (void)_prepareConstraintsIfNecessary;
- (BOOL)shouldRemovePresentersView;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;

@end
