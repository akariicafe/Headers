@class NSString, NSSet, SBSceneLayoutWorkspaceTransaction, SBAppRepairTransaction, UIApplicationSceneDeactivationAssertion, NSCountedSet, SBFloatingDockBehaviorAssertion, SBUIAnimationController;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver> {
    id /* block */ _transitionCompletion;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id /* block */ _layoutTransitionContinuation;
    SBAppRepairTransaction *_appRepairTransaction;
    SBUIAnimationController *_animationController;
    NSCountedSet *_completionDelayRequesters;
    BOOL _underLockScreenInForeground;
    BOOL _gestureInitiated;
    unsigned long long _preactivationForegroundRunningApplicationCount;
    BOOL _toAndFromApplicationsDiffer;
    BOOL _retriedAfterVoluntaryExit;
    BOOL _applicationStateNeedsCapture;
    BOOL _dismissedOverlays;
    BOOL _shouldSerialDismissOverlays;
    BOOL _touchCancellationDisabled;
}

@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *floatingDockBehaviorAssertion;
@property (readonly, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBSceneLayoutWorkspaceTransaction *layoutTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInterruptTransaction:(id)a0 forTransitionRequest:(id)a1;

- (void)_willBegin;
- (id)_transitionContext;
- (void)_relinquishResignActiveAssertion;
- (id)initWithTransitionRequest:(id)a0;
- (id)createSceneEntityForHandle:(id)a0;
- (void)_willInterruptWithReason:(id)a0;
- (void)_willFailWithReason:(id)a0;
- (void)transaction:(id)a0 didEndLayoutTransitionWithContinuation:(id /* block */)a1;
- (id)_setupAnimation;
- (void)_childTransactionDidComplete:(id)a0;
- (BOOL)isFromMainSwitcher;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (id)_scenesToBackground;
- (void).cxx_destruct;
- (void)_delayTransitionCompletionForRequester:(id)a0;
- (void)transactionWillBeginLayoutTransition:(id)a0;
- (void)_configureAnimation;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;
- (void)_stopDelayingTransitionCompletionForRequester:(id)a0;
- (void)animationController:(id)a0 willBeginAnimation:(BOOL)a1;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (id)animationController;
- (void)dealloc;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (void)_didComplete;
- (void)_beginTransition;
- (void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)a0;
- (BOOL)_canBeInterrupted;
- (BOOL)_shouldSerialDismissOverlays;
- (BOOL)_hasPreAnimationTasks;
- (id)_customizedDescriptionProperties;
- (BOOL)isGoingToCoverSheet;
- (BOOL)toAndFromAppsDiffer;
- (void)_endTransition;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (BOOL)_hasPostAnimationTasks;
- (void)activateApplications;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)a0;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void)_didInterruptWithReason:(id)a0;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_checkForAnimationCompletion;
- (BOOL)_beginAnimation;
- (void)_captureApplicationState;
- (void)_handleApplicationDidNotChange:(id)a0;
- (void)_animationDidFinish;
- (void)performToAppStateCleanup;
- (void)_beginAnimationIfNecessary;
- (BOOL)isGoingToMainSwitcher;
- (void)transaction:(id)a0 performTransitionWithCompletion:(id /* block */)a1;
- (BOOL)shouldWatchdog:(id *)a0;
- (BOOL)_transitionWasCancelled;
- (void)_noteAnimationFinished;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)a0;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldRestoreSpringBoardContentOnCleanup;
- (void)_animationWillBegin:(BOOL)a0;
- (void)_acquireResignActiveAssertion;
- (BOOL)_shouldResignActiveForAnimation;
- (double)watchdogTimeout;
- (void)_synchronizeWithSceneUpdates;
- (void)_setShouldSerialDismissOverlays:(BOOL)a0;
- (void)animationControllerDidRevealApplication:(id)a0;
- (void)_animationDidRevealApplication;
- (void)_completeCurrentTransition;
- (BOOL)isGoingToLauncher;
- (void)_clearAnimation;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)a0;

@end
