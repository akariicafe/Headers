@class UIView, NSString, UITapGestureRecognizer, PGControlsViewModel, UIViewPropertyAnimator, NSTimer, PGControlsView, NSMutableSet, UIGestureRecognizer;
@protocol PGCommandHandler;

@interface PGControlsContainerView : UIView <PGControlsViewModelDelegate, UIGestureRecognizerDelegate> {
    PGControlsViewModel *_viewModel;
    PGControlsView *_controlsView;
    UIViewPropertyAnimator *_containerViewVisibilityAnimator;
    UIViewPropertyAnimator *_controlsViewVisibilityAnimator;
    UIViewPropertyAnimator *_hidableControlsVisibilityAnimator;
    UIView *_interruptionDimmingView;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleDoubleTapGestureRecognizer;
    UIGestureRecognizer *_hoverGestureRecognizer;
    NSTimer *_hideControlsAfterDelayTimer;
    NSMutableSet *_preventAutoHideOfControlsAssertionIdentifiers;
}

@property (weak, nonatomic) id<PGCommandHandler> commandHandler;
@property (nonatomic) BOOL showsPictureInPictureUnavailableIndicator;
@property (nonatomic, getter=isShowingControlsForHoverActive) BOOL showingControlsForHoverActive;
@property (nonatomic, getter=isInteractivelyResizing) BOOL interactivelyResizing;
@property (copy, nonatomic) id /* block */ coordinatedAnimationsForControlsVisibiity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_invalidateTimer;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_handleDoubleTapGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_handleHoverGestureRecognizer:(id)a0;
- (void)didMoveToWindow;
- (id)viewModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)_handleSingleTapGestureRecognizer:(id)a0;
- (void)_handleDoubleDoubleTapGestureRecognizer:(id)a0;
- (id)_updateVisibilityOfView:(id)a0 hidden:(BOOL)a1 animated:(BOOL)a2 existingAnimator:(id)a3;
- (void)_setControlsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_setPrefersControlsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateHideControlsAfterDelayTimer;
- (BOOL)_controlsShouldAutoHide;
- (id)_acquirePreventAutoHideOfControlsAssertionWithReason:(id)a0;
- (id)_performVisibilityTransitionAnimated:(BOOL)a0 existingAnimator:(id)a1 animations:(id /* block */)a2 success:(id /* block */)a3;
- (void)controlsViewModel:(id)a0 valuesChangedFromOldValue:(id)a1;
- (void)controlsViewModel:(id)a0 didIssueCommand:(id)a1;
- (void)setControlsContainerHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)a0;

@end
