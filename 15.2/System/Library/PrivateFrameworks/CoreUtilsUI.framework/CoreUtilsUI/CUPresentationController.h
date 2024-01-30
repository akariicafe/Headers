@class UIView;

@interface CUPresentationController : UIPresentationController {
    UIView *_dimmingView;
}

- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
