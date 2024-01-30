@class NSTimer, SBMainWorkspaceTransaction, SBAutoPIPWorkspaceTransaction, NSUUID, SBFluidSwitcherViewController, SBSceneLayoutWorkspaceTransaction, SBAppLayout, UIApplicationSceneDeactivationAssertion, NSString, SBMainDisplayLayoutState, SBTransientOverlayViewController, SBUISwitcherAnimationController;
@protocol SBFluidSwitcherGestureWorkspaceTransactionDelegate, BSInvalidatable;

@interface SBFluidSwitcherGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceApplicationSceneTransitionContextDelegate, SBViewMorphAnimatorObserver> {
    BOOL _calledBeginWithGesture;
    BOOL _hasActiveLayoutStateTransitionCoordinatorTransition;
    BOOL _hasCompletedFirstCACommitSinceTransactionBeganForPPT;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
    long long _numberOfAppLayoutsTraveledWithArcSwipe;
    double _digitizerSurfaceHeightForLastGestureEvent;
    BOOL _isPointerTouch;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (weak, nonatomic) id<SBFluidSwitcherGestureWorkspaceTransactionDelegate> delegate;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *backgroundingScenesDeactivationAssertion;
@property (retain, nonatomic) SBMainDisplayLayoutState *originalLayoutState;
@property (retain, nonatomic) SBMainDisplayLayoutState *activeLayoutState;
@property (retain, nonatomic) SBMainWorkspaceTransaction *finalRootTransaction;
@property (retain, nonatomic) SBSceneLayoutWorkspaceTransaction *sceneLayoutTransaction;
@property (copy, nonatomic) id /* block */ layoutCompletion;
@property (retain, nonatomic) SBAutoPIPWorkspaceTransaction *autoPIPWorkspaceTransaction;
@property (retain, nonatomic) NSTimer *activateScenesTimer;
@property (retain, nonatomic) SBTransientOverlayViewController *switcherTransitioningTransientOverlayViewController;
@property (readonly, nonatomic) BOOL hasCompletedAtLeastOneGesture;
@property (readonly, nonatomic) NSUUID *gestureID;
@property (retain, nonatomic) SBAppLayout *selectedAppLayout;
@property (retain, nonatomic) SBUISwitcherAnimationController *animationController;
@property (nonatomic) BOOL shouldCancelGestureUponInterruption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canBeInterrupted;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (void)transactionDidComplete:(id)a0;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (void)updateGestureWithTransitionRequest:(id)a0;
- (id)_createWorkspaceTransientOverlayForAppLayout:(id)a0;
- (void)transaction:(id)a0 didEndLayoutTransitionWithContinuation:(id /* block */)a1;
- (void)transaction:(id)a0 performTransitionWithCompletion:(id /* block */)a1;
- (void)completeGestureWithTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (id)createSceneEntityForHandle:(id)a0;
- (void)transactionWillBeginLayoutTransition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (long long)_gestureType;
- (void)_didInterruptWithReason:(id)a0;
- (void)dealloc;
- (void)_willInterruptWithReason:(id)a0;
- (void)_beginWithGesture:(id)a0;
- (void)didEndAllAnimations;
- (void)_updateWithGesture:(id)a0;
- (void)_finishWithGesture:(id)a0;
- (void)_finishWithCompletionType:(long long)a0;
- (void)systemGestureStateChanged:(id)a0;
- (void)_failRunningLayoutStateTransition;
- (void)_updatePPTsForGestureTransactionBegan;
- (void)_switcherGestureDidUpdate:(id)a0;
- (void)_willBeginWithGesture:(id)a0;
- (id)_transitionRequestForApplicationTransitionContext:(id)a0 eventLabel:(id)a1;
- (void)_updateDigitizerSurfaceDimensions;
- (id)_currentGestureEventForGesture:(id)a0;
- (void)_updatePPTsForGestureEnded;
- (id)_copiedTransitionRequestFromTransitionRequest:(id)a0;
- (void)_updatePPTsForAnimationEndedWithFinalLayoutState:(id)a0;
- (void)_addChildWorkspaceTransaction:(id)a0;
- (id)_transitionRequestForSwitcherTransitionRequest:(id)a0 eventLabel:(id)a1;
- (void)_acquireBackgroundingScenesDeactivationAssertionForTransitionRequest:(id)a0;
- (void)_runSceneLayoutTransactionForTransitionRequest:(id)a0 updateScenes:(BOOL)a1;
- (void)_addWaitForSceneLayoutTransitionTransaction:(id)a0 forLeafAnimationControllers:(id)a1;
- (id)initWithTransitionRequest:(id)a0 fluidSwitcherViewController:(id)a1 delegate:(id)a2;
- (BOOL)shouldSuppressMedusaKeyboardDuringGesture;

@end
