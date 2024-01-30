@class NSHashTable, NSString, BKSHIDEventDeferringToken, RBSAssertion, NSMutableDictionary, FBApplicationProcess, NSMutableSet, NSObject, RBSProcessMonitor, NSMutableOrderedSet, FBProcess;
@protocol FBProcessWatchdogProviding, OS_dispatch_queue, FBProcessManagerKeyboardFocusDelegate;

@interface FBProcessManager : NSObject <FBProcessDelegate> {
    FBProcess *_currentProcess;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    RBSProcessMonitor *_processMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bootstrapLock;
    NSMutableSet *_bootstrap_addedProcesses;
    NSMutableSet *_bootstrap_pendingProcesses;
    NSMutableSet *_bootstrap_processPredicates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_processesByPID;
    NSMutableDictionary *_lock_processesByVersionedPID;
    NSMutableDictionary *_lock_processesByIdentity;
    NSHashTable *_lock_observers;
    NSMutableOrderedSet *_lock_foregroundRunningProcesses;
    BKSHIDEventDeferringToken *_lock_previouslySelectedForegroundToken;
    FBProcess *_lock_previouslySelectedForegroundProcess;
    FBProcess *_lock_preferredForegroundAppProcess;
    BKSHIDEventDeferringToken *_lock_preferredForegroundToken;
    id<FBProcessManagerKeyboardFocusDelegate> _lock_keyboardFocusDelegate;
    RBSAssertion *_lock_assertion;
    BOOL _lock_initializationComplete;
    BOOL _currentProcessIsDefaultShell;
}

@property (retain) id<FBProcessWatchdogProviding> defaultWatchdogPolicy;
@property (readonly, nonatomic) FBApplicationProcess *systemApplicationProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;

- (id)_createProcessFutureWithExecutionContext:(id)a0 error:(out id *)a1;
- (id)_bootstrapProcessWithExecutionContext:(id)a0 synchronously:(BOOL)a1 error:(out id *)a2;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (id)currentProcess;
- (void)setKeyboardFocusDelegate:(id)a0;
- (id)processesForBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_reallyRegisterProcessForHandle:(id)a0;
- (id)processForVersionedPID:(long long)a0;
- (id)keyboardFocusDelegate;
- (void)_noteShellInitializationComplete;
- (id)applicationProcessesForBundleIdentifier:(id)a0;
- (id)registerProcessForHandle:(id)a0;
- (void)_lock_evaluateForegroundEventRouting;
- (void)_lock_addForegroundRunningProcess:(id)a0;
- (void)_bootstrap_addProcess:(id)a0;
- (id)allApplicationProcesses;
- (id)processForIdentity:(id)a0;
- (id)applicationProcessForPID:(int)a0;
- (id)registerProcessForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)noteProcessDidExit:(id)a0;
- (void)noteProcess:(id)a0 didUpdateState:(id)a1;
- (void)_bootstrap_consumeLock_addProcess:(id)a0 synchronously:(BOOL)a1;
- (oneway void)launchProcessWithContext:(id)a0;
- (id)allProcesses;
- (id)_bootstrapProcessWithHandle:(id)a0 synchronously:(BOOL)a1 error:(out id *)a2;
- (void)_removeProcess:(id)a0;
- (id)_createProcessWithExecutionContext:(id)a0 error:(out id *)a1;
- (void)_notifyObserversUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_lock_removeForegroundRunningProcess:(id)a0;
- (id)_createProcessFutureForProcessHandle:(id)a0 error:(out id *)a1;
- (void)noteProcessAssertionStateDidChange:(id)a0;
- (id)processForPID:(int)a0;
- (void)_setPreferredForegroundApplicationProcess:(id)a0 deferringToken:(id)a1;

@end
