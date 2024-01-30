@class NSMutableArray, NSSet, SBMainWorkspaceTransaction, SBMainDisplaySceneLayoutViewController, SBBlurViewCoordinator, UIApplicationSceneDeactivationAssertion, SBLayoutElementViewController;
@protocol BSInvalidatable;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    double _previousSlideOffPercent;
    NSSet *_fromApplicationSceneEntities;
    NSSet *_toApplicationSceneEntitiesSuspendPrimary;
    NSSet *_toApplicationSceneEntitiesSuspendSide;
    BOOL _isSceneLayoutViewControllerPushedIn;
    id<BSInvalidatable> _deferOrientationUpdatesForResizeAssertion;
    NSMutableArray *_statusBarAssertions;
}

@property (readonly, nonatomic) SBMainDisplaySceneLayoutViewController *layoutViewController;
@property (readonly, nonatomic) SBLayoutElementViewController *primaryLayoutElementController;
@property (readonly, nonatomic) SBLayoutElementViewController *sideLayoutElementController;
@property (readonly, nonatomic) UIApplicationSceneDeactivationAssertion *appDeactivationAssertion;
@property (retain, nonatomic) SBBlurViewCoordinator *blurCoordinator;
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentWorkspaceTransaction;
@property (nonatomic) unsigned long long currentGestureIdentifier;

+ (double)_rubberbandingStartScreenEdgeMarginInOrientation:(long long)a0;

- (id)initWithTransitionRequest:(id)a0;
- (double)_rubberBandOffsetForOffset:(double)a0 maxOffset:(double)a1 minOffset:(double)a2 range:(double)a3 outside:(BOOL *)a4;
- (void)_childTransactionDidComplete:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_begin;
- (void)_didInterruptWithReason:(id)a0;
- (void)_finishWithCompletionType:(long long)a0;
- (void)systemGestureStateChanged:(id)a0;
- (void)_addChildWorkspaceTransaction:(id)a0;
- (id)initWithTransitionRequest:(id)a0 layoutViewController:(id)a1;
- (void)_unhideLayoutElementViewControllerStatusBars;
- (long long)_spaceConfigurationForGestureRegion:(long long)a0;
- (long long)_layoutModeForGestureRegion:(long long)a0;
- (double)_maxRubberBandOffset;
- (BOOL)_canResizeToHalfHalf;
- (void)_restartResizeUI;
- (void)_updateResizeUIFromGestureRecognizer:(id)a0;
- (double)_dividerPositionFromPanGestureRecognizer:(id)a0;
- (double)_normalizedVelocityFromPanGestureRecognizer:(id)a0;
- (void)_resizeGestureFinishedWithState:(long long)a0 gestureDividerPosition:(double)a1 normalizedVelocity:(double)a2;
- (void)_hideLayoutElementViewControllerStatusBars;
- (void)_pushInSceneLayoutViewController;
- (long long)_resizeGestureRegionForLocation:(double)a0 velocity:(double)a1;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 sideLayoutElementViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 separatorViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 forResizeGestureRegion:(long long)a3 location:(double)a4 allowRubberbanding:(BOOL)a5;
- (long long)_finalActionForGestureRegion:(long long)a0;
- (void)_updateElementViewsAlphaAndGrabberForFinalAction:(long long)a0;
- (void)_resizeGestureFinishedWithFinalAction:(long long)a0;
- (id)_transitionContextForFinalAction:(long long)a0;
- (id)_transactionForExecutingApplicationTransitionContext:(id)a0 eventLabel:(id)a1;
- (void)_dismissResizeUIAnimated:(BOOL)a0;
- (void)_animateElementViewsForFinalAction:(long long)a0 forLayoutState:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_appFrameForElementWithRole:(long long)a0 inLayoutState:(id)a1 spaceConfiguration:(long long)a2 inCoordinateSpace:(id)a3;
- (void)_popOutSceneLayoutViewController;
- (void)_resizeGestureDidUpdate:(id)a0;

@end
