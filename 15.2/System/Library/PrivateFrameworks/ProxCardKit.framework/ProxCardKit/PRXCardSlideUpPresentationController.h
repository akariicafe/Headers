@class UIView;

@interface PRXCardSlideUpPresentationController : UIPresentationController

@property (readonly, nonatomic) UIView *dimmingView;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDimmingStyle:(long long)a0 presentedViewController:(id)a1 presentingViewController:(id)a2;

@end
