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

- (BOOL)_canBeInterrupted;
- (void)_sendActivationResultWithError:(id)a0;
- (id)initWithTransitionRequest:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;
- (void)_childTransactionDidComplete:(id)a0;
- (void)performSynchronizedCommit;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (BOOL)isReadyForSynchronizedCommit;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (void)_willBegin;
- (BOOL)_sceneEntities:(id)a0 hasEntityRepresentingSceneID:(id)a1;
- (void)_updateScenesForTransitionCompletion;
- (void)_evaluateTransitionCompletion;
- (id)sceneManager;
- (void)transaction:(id)a0 didCommitSceneUpdate:(id)a1;
- (void)_willFailWithReason:(id)a0;
- (void)_updateAggregateDictionary;
- (void)transaction:(id)a0 willUpdateScene:(id)a1;
- (void)_completeTransition;
- (BOOL)_overrideInterfaceOrientationForOrientationMismatch:(long long *)a0;
- (void)_performTransition;
- (void)transaction:(id)a0 didCreateScene:(id)a1;
- (void)transaction:(id)a0 willCommitSceneUpdate:(id)a1;
- (void)_captureAppsForTransition;
- (void).cxx_destruct;
- (void)transaction:(id)a0 willLaunchProcess:(id)a1;
- (long long)_orientationForFollowOnRotationIfNeeded;
- (void)_beginLayoutTransition;
- (void)_prepareScenesForSceneUpdates;
- (void)transaction:(id)a0 didLaunchProcess:(id)a1;
- (void)_prepareLayoutTransition;
- (void)dealloc;
- (void)_willInterruptWithReason:(id)a0;
- (void)_prepareScenesForTransition;
- (void)_updateKeyboardContextMaskStyles:(BOOL)a0;
- (BOOL)synchronizedTransactionGroup:(id)a0 shouldFailForSynchronizedTransaction:(id)a1;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)a0;

@end
