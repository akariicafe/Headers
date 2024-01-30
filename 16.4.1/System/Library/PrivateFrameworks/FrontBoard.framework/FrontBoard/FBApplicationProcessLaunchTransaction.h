@class FBWaitForProcessDeathTransaction, FBProcessManager, RBSProcessIdentity, FBProcess, FBProcessExecutionContext, BSAtomicSignal;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {
    FBProcessManager *_processManager;
    RBSProcessIdentity *_identity;
    id /* block */ _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BSAtomicSignal *_interruptedOrComplete;
}

@property (readonly, nonatomic) FBProcess *process;
@property (readonly, nonatomic) BOOL failedLaunch;
@property (readonly, nonatomic) BOOL exited;

- (void)_begin;
- (void)_willInterruptWithReason:(id)a0;
- (void)_willFailWithReason:(id)a0;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)a0;
- (id)initWithApplicationProcess:(id)a0;
- (void)_willComplete;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (void)_didComplete;
- (id)initWithProcessIdentity:(id)a0 executionContextProvider:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)_queue_finishProcessLaunch:(BOOL)a0;
- (BOOL)_canBeInterrupted;
- (void)_queue_launchProcess:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithApplicationBundleID:(id)a0 executionContextProvider:(id /* block */)a1;
- (id)init;
- (void)_queue_noteExited;
- (void).cxx_destruct;
- (void)_queue_processWillLaunch:(id)a0;

@end
