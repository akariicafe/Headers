@class BSMonotonicReferenceTime, SBGrabberTongue, SBFluidScrunchGestureRecognizer, SBHomeGestureParticipant, SBIndirectPanGestureRecognizer, SBPanSystemGestureRecognizer, UINotificationFeedbackGenerator, SBAppSwitcherDefaults, NSString, SBMainDisplaySceneLayoutViewController, NSTimer, SBFluidSwitcherDragAndDropManager, UIHoverGestureRecognizer, UIView, SBFluidSwitcherGestureWorkspaceTransaction, SBFZStackParticipant, SBFHomeGrabberSettings, SBFluidSwitcherViewController, SBAppSwitcherSettings, SBReachabilitySettings, SBSwitcherForcePressSystemGestureRecognizer, SBDragAndDropWorkspaceTransaction, SBFluidSwitcherPanGestureRecognizer, SBHomeGestureSettings, NSHashTable;
@protocol SBFluidSwitcherGestureManagerDelegate;

@interface SBFluidSwitcherGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, BSDescriptionProviding, PTSettingsKeyObserver, SBGrabberTongueDelegate, SBHomeGrabberDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBPanSystemGestureRecognizerDelegate, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureWorkspaceTransactionDelegate, SBFluidSwitcherDragAndDropManagerDelegate>

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherContentController;
@property (weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (weak, nonatomic) id<SBFluidSwitcherGestureManagerDelegate> delegate;
@property (retain, nonatomic) NSHashTable *currentHomeGrabberViews;
@property (retain, nonatomic) SBAppSwitcherDefaults *appSwitcherDefaults;
@property (retain, nonatomic) SBAppSwitcherSettings *appSwitcherSettings;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBFHomeGrabberSettings *homeGrabberSettings;
@property (retain, nonatomic) SBReachabilitySettings *reachabilitySettings;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *deckInSwitcherPanGestureRecognizer;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectBottomEdgePanGestureRecognizer;
@property (retain, nonatomic) SBGrabberTongue *deckGrabberTongue;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *activateReachabilityGestureRecognizer;
@property (nonatomic) BOOL usesHomeAffordanceRulesForGrabberTongue;
@property (nonatomic) BOOL interactivelyPresentingTongue;
@property (nonatomic) BOOL playedEdgeProtectHaptic;
@property (retain, nonatomic) UINotificationFeedbackGenerator *edgeProtectFeedbackGenerator;
@property (retain, nonatomic) NSTimer *delayedHomeGrabberUpdateTimer;
@property (retain, nonatomic) UIView *exclusionTrapezoidDebugView;
@property (nonatomic) BOOL shouldRubberbandGrabberViewForReduceMotion;
@property (retain, nonatomic) SBSwitcherForcePressSystemGestureRecognizer *deckSwitcherForcePressRecognizer;
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *fluidScrunchGestureRecognizer;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *clickAndDragHomeGestureRecognizer;
@property (retain, nonatomic) BSMonotonicReferenceTime *lastClickAndDragHomeGestureTimestamp;
@property (retain, nonatomic) UIHoverGestureRecognizer *switcherHoverGestureRecognizer;
@property (retain, nonatomic) SBGrabberTongue *rightEdgeFloatingAppGrabberTongue;
@property (retain, nonatomic) SBGrabberTongue *leftEdgeFloatingAppGrabberTongue;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *swipeUpFloatingAppGestureRecognizer;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *moveFloatingApplicationGestureRecognizer;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectDismissFloatingApplicationGestureRecognizer;
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *indirectFloatingAppScrunchGestureRecognizer;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *pinFloatingApplicationGestureRecognizer;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *unpinSplitViewApplicationGestureRecognizer;
@property (retain, nonatomic) SBPanSystemGestureRecognizer *sceneResizePanGestureRecognizer;
@property (retain, nonatomic) SBFluidSwitcherDragAndDropManager *fluidDragAndDropManager;
@property (retain, nonatomic) SBFluidSwitcherGestureWorkspaceTransaction *activeGestureTransaction;
@property (readonly, nonatomic) SBDragAndDropWorkspaceTransaction *dragAndDropWorkspaceTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentLayoutState;
- (void)_handleScrunchGesture:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)grabberTongue:(id)a0 shouldAllowSecondSwipeWithEdgeLocation:(double)a1;
- (void)_setUpGestureRecognizers;
- (void)zStackParticipantDidChange:(id)a0;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)dragAndDropManager:(id)a0 didUpdateGesture:(id)a1;
- (BOOL)_hasActiveModalFloatingApplication;
- (long long)_currentUnlockedEnvironmentMode;
- (BOOL)_isEdgeLocationInHomeAffordanceRegion:(double)a0;
- (void)transactionDidComplete:(id)a0;
- (BOOL)_isTransactionRunningForGestureRecognizer:(id)a0;
- (BOOL)_shouldBeginFloatingApplicationSwipeUpGesture:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)_updateHomeGestureParticipant;
- (BOOL)_shouldSuppressEdgeProtectToAllowSwipesImmediatelyAfterTransition;
- (BOOL)_shouldBeginIndirectFloatingAppScrunchGesture:(id)a0;
- (BOOL)_shouldSuppressEdgeProtect;
- (id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
- (BOOL)_shouldBeginReachabilityGesture:(id)a0;
- (BOOL)_shouldBeginFloatingApplicationMoveGesture:(id)a0;
- (void)_configureTransitionRequest:(id)a0 forGestureBegin:(id)a1;
- (void)dragAndDropManager:(id)a0 didBeginDraggingWindowWithSceneIdentifier:(id)a1;
- (id)dragAndDropManager:(id)a0 sourceViewProviderForDraggingWindowWithGestureRecognizer:(id)a1;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (BOOL)_edgeLocationIsOutsideFloatingApplicationGrabberFreeRegion:(double)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_shouldProtectEdgeLocation:(double)a0;
- (id)_currentFloatingAppLayout;
- (void)updateGestureWithTransitionRequest:(id)a0;
- (void)dragAndDropManager:(id)a0 didBeginGesture:(id)a1;
- (void)configureIndirectBottomEdgePanGestureRecognizer;
- (BOOL)_shouldSplitViewApplicationUnpinGesture:(id)a0 receiveTouch:(id)a1;
- (long long)_gestureTypeForGestureRecognizer:(id)a0;
- (BOOL)_shouldBeginClickAndDragHomeGesture:(id)a0;
- (BOOL)_shouldClickAndDragHomeGesture:(id)a0 receiveTouch:(id)a1;
- (id)_indirectPresentFloatingAppGestureRecognizerForEdge:(unsigned long long)a0;
- (void)grabberTongueWillPresent:(id)a0;
- (BOOL)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(unsigned long long)a0;
- (void)_updateDeckSwitcherInSwitcherAndReachabilityGesturePresence;
- (BOOL)grabberTongue:(id)a0 shouldReceiveTouch:(id)a1;
- (id)customGestureRecognizerForGrabberTongue:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_handleWindowDragGestureRecognizer:(id)a0;
- (void)_handleDeckSwitcherPanGesture:(id)a0;
- (id)succinctDescription;
- (void)_handleFloatingAppPresentGesture:(id)a0;
- (BOOL)_shouldFloatingApplicationSwipeUpGesture:(id)a0 receiveTouch:(id)a1;
- (id)_grabberTongueForGestureRecognizer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_floatingApplicationBounds;
- (void)grabberTongueCanceledPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (id)_firstFloatingAppLayout;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (void)_hideGrabberAnimated:(BOOL)a0;
- (void)_handleSwitcherPanGestureEnded:(id)a0;
- (BOOL)grabberTongue:(id)a0 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)a1;
- (BOOL)grabberTongueOrPullEnabled:(id)a0 forGestureRecognizer:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)dragAndDropManager:(id)a0 didEndGesture:(id)a1;
- (BOOL)grabberTongue:(id)a0 shouldDismissTongueOnSecondSwipeWithEdgeLocation:(double)a1;
- (void)completeGestureWithTransitionRequest:(id)a0;
- (void)_updateHomeGrabberViewsWithAnimationMode:(long long)a0;
- (void)_startFluidSwitcherTransactionForGestureRecognizer:(id)a0;
- (id)initWithSwitcherContentController:(id)a0 sceneLayoutViewController:(id)a1 delegate:(id)a2;
- (void)_updateZStackParticipantWithReason:(id)a0;
- (id)indirectPanGestureRecognizerForGrabberTongue:(id)a0;
- (void)dragAndDropManager:(id)a0 willEndDraggingWindowWithSceneIdentifier:(id)a1;
- (id)dragAndDropManager:(id)a0 displayItemForDraggingWindowWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_updateExclusionTrapezoidDebugView;
- (void)_handleSwitcherGestureBegan:(id)a0;
- (void)grabberTongueBeganPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)_handleSwitcherPanGestureBegan:(id)a0;
- (void)failMultitaskingGesturesForReason:(id)a0;
- (void)_handleClickAndDragHomeGesture:(id)a0;
- (BOOL)_shouldDeckInSwitcherPanGesture:(id)a0 receiveTouch:(id)a1;
- (void)_configureScrunchGesture;
- (BOOL)_shouldBeginFloatingApplicationPinGesture:(id)a0;
- (void)_updateReachabilityGestureSettings;
- (void)_handleDeckSwitcherForcePressGesture:(id)a0;
- (void)grabberTongueWillDismiss:(id)a0;
- (void)fluidSwitcherGestureTransaction:(id)a0 didUpdateGesture:(id)a1;
- (void)dragAndDropManager:(id)a0 didPlatterizeWindowDragWithSceneIdentifier:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_shouldFloatingApplicationPinGesture:(id)a0 receiveTouch:(id)a1;
- (BOOL)_shouldSceneResizeGesture:(id)a0 receiveTouch:(id)a1;
- (void)_handleFluidGesture:(id)a0;
- (void)_updateDeckSwitcherForcePressGesturePresence;
- (id)succinctDescriptionBuilder;
- (void)_updateSwitcherBottomEdgeGesturePresence;
- (BOOL)_shouldReachabilityGesture:(id)a0 receiveTouch:(id)a1;
- (void)grabberTongueUpdatedPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)invalidate;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)fluidSwitcherGestureTransaction:(id)a0 didBeginGesture:(id)a1;
- (id)homeGestureBottomEdgeRecognizer;
- (void)grabberTongueTapped:(id)a0;
- (BOOL)_shouldBeginFloatingApplicationPresentGesture:(id)a0;
- (void)_handleSwitcherPanGestureChanged:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)_shouldFloatingApplicationMoveGesture:(id)a0 receiveTouch:(id)a1;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (BOOL)_isBannerOccludingRegionAtReferencePoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldBeginBottomEdgePanGesture:(id)a0;
- (void)fluidSwitcherGestureTransaction:(id)a0 didEndGesture:(id)a1;
- (long long)_floatingConfigurationForActivatedEdge:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)_shouldIndirectFloatingAppScrunchGesture:(id)a0 receiveTouch:(id)a1;
- (BOOL)_shouldBeginSplitViewApplicationUnpinGesture:(id)a0;
- (BOOL)isDragAndDropTransactionRunning;
- (BOOL)_shouldBeginDeckForcePressGesture:(id)a0;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)a0;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (BOOL)_shouldAllowFloatingApplicationGesture:(id)a0 gestureType:(unsigned long long)a1 failureReason:(id *)a2;
- (unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(id)a0;
- (void)grabberTongueDidPresentInteractively:(id)a0 withDistance:(double)a1 andVelocity:(double)a2;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (void)grabberTongueWillPresentInteractively:(id)a0 withDistance:(double)a1 andVelocity:(double)a2;
- (BOOL)shouldSuppressTongueViewForGrabberTongue:(id)a0;
- (void)takeHiddenAssertionForHomeGrabber:(id)a0;
- (Class)_fluidSwitcherGestureTransactionClassForGestureType:(long long)a0;
- (BOOL)_shouldBeginIndirectHomePanGesture:(id)a0;
- (void)_configureFloatingApplicationGestureRecognizers;
- (BOOL)_shouldBeginDeckInSwitcherPanGesture:(id)a0;
- (void)grabberTongueEndedPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (BOOL)_shouldBeginFluidScrunchGesture:(id)a0;

@end
