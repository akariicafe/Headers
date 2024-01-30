@class NSString, FBApplicationProcess, FBSSceneClientIdentity, NSMutableArray, FBApplicationProcessLaunchTransaction;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {
    FBSSceneClientIdentity *_clientIdentity;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    BOOL _hasScheduledProcessLaunch;
    BOOL _processLaunched;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateTransactions;
}

@property (readonly, nonatomic) FBApplicationProcess *process;
@property (nonatomic) BOOL waitsForSceneCommits;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_willInterruptWithReason:(id)a0;
- (void)_willFailWithReason:(id)a0;
- (void)updateSceneTransactionDidCommitUpdate:(id)a0;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)a0;
- (void)_noteWillCommitUpdateForScene:(id)a0;
- (void)_noteDidCommitUpdateForScene:(id)a0;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (void)_didComplete;
- (id)initWithProcessIdentity:(id)a0 executionContextProvider:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)_executeProcessLaunchIfAppropriate;
- (void)_updateSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (BOOL)_canBeInterrupted;
- (void)_didRemoveChildTransaction:(id)a0;
- (void)updateSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_willBegin;
- (void)_didSatisfyMilestone:(id)a0;
- (void)transaction:(id)a0 willLaunchProcess:(id)a1;
- (void)updateSceneTransactionWillCommitUpdate:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithApplicationBundleID:(id)a0 executionContextProvider:(id /* block */)a1;
- (BOOL)_isReadyToLaunch;
- (void)updateSceneTransactionDidCreateScene:(id)a0;
- (void)updateSceneWithIdentifier:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)updateSceneTransactionWillUpdateScene:(id)a0;
- (id)init;
- (id)initWithClientIdentity:(id)a0 executionContextProvider:(id /* block */)a1;
- (void)_willAddChildTransaction:(id)a0;
- (void)transaction:(id)a0 didLaunchProcess:(id)a1;
- (void)_childTransactionDidFinishWork:(id)a0;
- (void).cxx_destruct;
- (void)_executeSceneUpdatesIfAppropriate;

@end
