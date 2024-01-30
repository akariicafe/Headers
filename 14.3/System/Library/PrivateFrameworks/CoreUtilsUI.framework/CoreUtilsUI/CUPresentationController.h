@class UIView;

@interface CUPresentationController : UIPresentationController {
    UIView *_dimmingView;
}

- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)containerViewWillLayoutSubviews;
- (void).cxx_destruct;

@end
