@class UIView, RemoteUIController;

@interface RUIPartialSheetPresentationController : UIPresentationController {
    UIView *_dimmingView;
    double _keyboardHeight;
}

@property (weak, nonatomic) RemoteUIController *remoteUIController;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)containerViewDidLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;
- (double)_maxHeight;
- (void)keyboardWillHideNotification:(id)a0;
- (void)didTapDimmingView;
- (void)keyboardWillShowNotification:(id)a0;

@end
