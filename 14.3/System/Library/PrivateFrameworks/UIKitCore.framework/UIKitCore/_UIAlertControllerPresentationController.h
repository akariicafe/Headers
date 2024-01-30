@class _UIKeyboardLayoutAlignmentView, NSString, _UIStatesFeedbackGenerator, NSLayoutConstraint, UIView, UIGestureRecognizer, UIAlertVisualStyleUpdatableConstraints;
@protocol _UIForcePresentationControllerDelegate;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController> {
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertVisualStyleUpdatableConstraints *_visualStyleUpdatableConstraints;
    NSLayoutConstraint *_topAvailableSpaceConstraint;
    NSLayoutConstraint *_bottomAvailableSpaceConstraint;
    BOOL constraintsPrepared;
}

@property (readonly) UIView *_dimmingView;
@property (setter=_setIsCurrentContext:) BOOL _isCurrentContext;
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) BOOL _shouldRespectNearestCurrentContextPresenter;
@property (nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) BOOL _chromeHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ presentationPhaseCompletionBlock;
@property (retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer;
@property (nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
@property (readonly, nonatomic) UIView *_revealContainerView;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;

- (long long)adaptivePresentationStyle;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)a0;
- (void)_presentedAlertControllerDidAdapt;
- (void)containerViewDidLayoutSubviews;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_preserveResponderAcrossWindows;
- (void)_updateConstraintsIfNecessary;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_presentedAlertController;
- (void)_prepareDimmingViewIfNecessary;
- (void)_prepareConstraintsIfNecessary;
- (void)setDelegate:(id)a0;
- (BOOL)_canDismissPresentation;
- (BOOL)_canCommitPresentation;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;

@end
