@class NSString, FBApplicationProcess, FBSSceneClientIdentity, NSMutableArray, FBApplicationProcessLaunchTransaction;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {
    FBSSceneClientIdentity *_clientIdentity;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    BOOL _processLaunched;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateSceneBlocks;
}

@property (readonly, nonatomic) FBApplicationProcess *process;
@property (nonatomic) BOOL waitsForSceneCommits;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transaction:(id)a0 willLaunchProcess:(id)a1;
- (void)updateSceneTransactionDidCommitUpdate:(id)a0;
- (void)_willInterruptWithReason:(id)a0;
- (void)_willFailWithReason:(id)a0;
- (void)transaction:(id)a0 didLaunchProcess:(id)a1;
- (void)updateSceneWithIdentifier:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_performSynchronizedCommit:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (void)updateSceneTransactionDidCreateScene:(id)a0;
- (void)_didComplete;
- (void)_willAddChildTransaction:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)addObserver:(id)a0;
- (id)_customizedDescriptionProperties;
- (id)initWithProcessIdentity:(id)a0 executionContextProvider:(id /* block */)a1;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)updateSceneTransactionWillUpdateScene:(id)a0;
- (id)initWithApplicationBundleID:(id)a0 executionContextProvider:(id /* block */)a1;
- (id)initWithClientIdentity:(id)a0 executionContextProvider:(id /* block */)a1;
- (void)_noteDidCommitUpdateForScene:(id)a0;
- (void)updateSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_noteWillCommitUpdateForScene:(id)a0;
- (void)updateSceneTransactionWillCommitUpdate:(id)a0;
- (void)_didRemoveChildTransaction:(id)a0;

@end
