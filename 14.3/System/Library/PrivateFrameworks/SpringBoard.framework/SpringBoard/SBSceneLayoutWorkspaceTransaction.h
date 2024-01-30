@class NSString, SBSceneBackgroundedStatusAssertion, SBWorkspaceApplicationSceneTransitionContext, NSSet, FBSynchronizedTransactionGroup, SBWorkspaceTransitionRequest, NSMutableSet, SBSceneLayoutSynchronizeTransitionTransaction, FBDisplayLayoutTransition;
@protocol FBSynchronizedTransactionDelegate, SBSceneLayoutWorkspaceTransactionDelegate;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction> {
    FBDisplayLayoutTransition *_fbLayoutTransition;
    BOOL _transitionFailed;
    BOOL _delegateTransitionComplete;
    BOOL _performSceneUpdates;
    BOOL _waitForSceneUpdates;
    BOOL _waitingForSynchronizedCommit;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizePrepareTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeSendActivationResultTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeBeginTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeAddSlavesTransaction;
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    NSMutableSet *_scenesToBackground;
    SBWorkspaceTransitionRequest *_interruptingTransitionRequest;
}

@property (weak, nonatomic) id<SBSceneLayoutWorkspaceTransactionDelegate> delegate;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) NSMutableSet *sceneUpdateTransactions;
@property (readonly, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) NSMutableSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) NSMutableSet *foregroundingApplicationSceneEntities;
@property (readonly, nonatomic) NSMutableSet *backgroundingApplicationSceneEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_willBegin;
- (void)transaction:(id)a0 willLaunchProcess:(id)a1;
- (id)initWithTransitionRequest:(id)a0;
- (void)_evaluateTransitionCompletion;
- (void)_willInterruptWithReason:(id)a0;
- (void)_willFailWithReason:(id)a0;
- (void)_sendActivationResultWithError:(id)a0;
- (void)_completeTransition;
- (void)_prepareLayoutTransition;
- (void)_updateAggregateDictionary;
- (void)transaction:(id)a0 didLaunchProcess:(id)a1;
- (void)performSynchronizedCommit;
- (void)_childTransactionDidComplete:(id)a0;
- (long long)_orientationForFollowOnRotationIfNeeded;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (void).cxx_destruct;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;
- (void)transaction:(id)a0 didCreateScene:(id)a1;
- (void)_prepareScenesForTransition;
- (void)dealloc;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (BOOL)isReadyForSynchronizedCommit;
- (void)_didComplete;
- (void)transaction:(id)a0 willCommitSceneUpdate:(id)a1;
- (void)transaction:(id)a0 willUpdateScene:(id)a1;
- (BOOL)_canBeInterrupted;
- (void)transaction:(id)a0 didCommitSceneUpdate:(id)a1;
- (void)_prepareScenesForSceneUpdates;
- (BOOL)_sceneEntities:(id)a0 hasEntityRepresentingSceneID:(id)a1;
- (void)_begin;
- (BOOL)synchronizedTransactionGroup:(id)a0 shouldFailForSynchronizedTransaction:(id)a1;
- (BOOL)_overrideInterfaceOrientationForOrientationMismatch:(long long *)a0;
- (void)_captureAppsForTransition;
- (void)_updateScenesForTransitionCompletion;
- (id)sceneManager;
- (void)_performTransition;
- (void)_beginLayoutTransition;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)a0;
- (void)_updateKeyboardContextMaskStyles:(BOOL)a0;

@end
