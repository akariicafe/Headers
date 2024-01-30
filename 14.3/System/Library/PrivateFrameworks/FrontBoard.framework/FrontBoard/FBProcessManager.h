@class NSHashTable, NSString, RBSProcessMonitor, RBSAssertion, FBApplicationProcess, NSMutableDictionary, NSMutableSet, NSObject, NSMutableOrderedSet, BKSHIDEventDeferringToken, FBProcess;
@protocol FBProcessWatchdogProviding, OS_dispatch_queue, FBProcessManagerKeyboardFocusDelegate;

@interface FBProcessManager : NSObject <FBProcessDelegate> {
    FBProcess *_currentProcess;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bootstrapLock;
    NSMutableSet *_bootstrap_pendingProcesses;
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
    RBSProcessMonitor *_lock_monitor;
    NSMutableSet *_lock_monitorPredicates;
    RBSAssertion *_lock_assertion;
    BOOL _lock_initializationComplete;
}

@property (retain) id<FBProcessWatchdogProviding> defaultWatchdogPolicy;
@property (readonly, nonatomic) FBApplicationProcess *systemApplicationProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (void)_removeProcess:(id)a0;
- (id)applicationProcessesForBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)registerProcessForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)dealloc;
- (id)_createProcessWithExecutionContext:(id)a0;
- (void)setKeyboardFocusDelegate:(id)a0;
- (id)processForIdentity:(id)a0;
- (void)addObserver:(id)a0;
- (void)noteProcessAssertionStateDidChange:(id)a0;
- (void)noteProcessDidExit:(id)a0;
- (id)_reallyRegisterProcessForHandle:(id)a0;
- (void)_lock_removeForegroundRunningProcess:(id)a0;
- (id)_bootstrapProcessWithHandle:(id)a0;
- (void)_lock_evaluateForegroundEventRouting;
- (void)_notifyObserversUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)applicationProcessForPID:(int)a0;
- (void)_noteShellInitializationComplete;
- (id)allProcesses;
- (id)currentProcess;
- (void)_lock_addForegroundRunningProcess:(id)a0;
- (id)allApplicationProcesses;
- (id)processesForBundleIdentifier:(id)a0;
- (id)processForPID:(int)a0;
- (id)keyboardFocusDelegate;
- (oneway void)launchProcessWithContext:(id)a0;
- (id)processForVersionedPID:(long long)a0;
- (void)noteProcess:(id)a0 didUpdateState:(id)a1;
- (id)_bootstrapProcessWithIdentity:(id)a0 executionContext:(id)a1;
- (id)registerProcessForHandle:(id)a0;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (void)_setPreferredForegroundApplicationProcess:(id)a0 deferringToken:(id)a1;
- (void)_bootstrap_addProcess:(id)a0;

@end
