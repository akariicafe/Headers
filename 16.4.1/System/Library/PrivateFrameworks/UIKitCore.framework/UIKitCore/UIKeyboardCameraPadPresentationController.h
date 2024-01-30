@class NSString, UIDimmingView, UIView;
@protocol UIDimmingViewDelegate, _UIAssertion;

@interface UIKeyboardCameraPadPresentationController : UIKeyboardCameraBasePresentationController <UIViewControllerAnimatedTransitioning> {
    id<_UIAssertion> _keyboardSuppressionAssertion;
    UIView *_shadowView;
    UIDimmingView *_dimmingView;
}

@property (weak, nonatomic) id<UIDimmingViewDelegate> dimmingViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updatesGuideDuringRotation;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)_animateDismissTransition:(id)a0;
- (void)_animatePresentTransition:(id)a0;
- (int)overrideTextEffectsVisibilityLevelForTransitionView:(id)a0;

@end
