@class RBLaunchdJobManager, NSString, RBProcessIndex, RBProcessMap, NSMutableDictionary, RBSystemState, NSMapTable;
@protocol RBBundlePropertiesManaging, RBJetsamBandProviding, RBProcessManagerDelegate, RBEntitlementManaging;

@interface RBProcessManager : NSObject <RBProcessManaging, RBStateCapturing> {
    RBLaunchdJobManager *_jobManager;
    id<RBBundlePropertiesManaging> _bundlePropertiesManager;
    id<RBEntitlementManaging> _entitlementManager;
    id<RBJetsamBandProviding> _jetsamBandProvider;
    id<RBProcessManagerDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingExitBlockLock;
    _Atomic unsigned long long _counter;
    RBProcessIndex *_processIndex;
    RBProcessIndex *_processGraveyard;
    RBSystemState *_systemState;
    RBProcessMap *_processState;
    NSMutableDictionary *_identityToPendingExitBlock;
    NSMapTable *_identityToProcessLifecycleQueue;
    BOOL _systemPreventsIdleSleep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

+ (id)stateApplicationQueue;

- (void)_removeProcess:(id)a0;
- (void)removeStateForProcessIdentity:(id)a0;
- (id)init;
- (id)_processForIdentifier:(id)a0 withAuditToken:(id)a1;
- (void).cxx_destruct;
- (id)processForIdentifier:(id)a0;
- (id)captureState;
- (id)_lifecycleQueue_addProcessWithInstance:(id)a0 properties:(id)a1;
- (id)_processForIdentifier:(id)a0;
- (void)applySystemState:(id)a0;
- (id)processesMatchingPredicate:(id)a0;
- (id)processForIdentity:(id)a0;
- (id)processForAuditToken:(id)a0;
- (void)executeTerminateRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)_canTerminateProcess:(id)a0 withContext:(id)a1 error:(out id *)a2;
- (BOOL)isActiveProcess:(id)a0;
- (void)_validateBundleIDForProcess:(id)a0 launchedWithContext:(id)a1;
- (void)systemPreventIdleSleepStateDidChange:(BOOL)a0;
- (void)didUpdateProcessStates:(id)a0 completion:(id /* block */)a1;
- (id)_processForInstance:(id)a0;
- (id)executeLaunchRequest:(id)a0 withError:(out id *)a1;
- (void)_executeLifecycleEventForIdentity:(id)a0 sync:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)start;
- (id)processForInstance:(id)a0;
- (id)busyExtensionInstancesFromSet:(id)a0;
- (id)_resolveProcessWithIdentifier:(id)a0 auditToken:(id)a1 properties:(id *)a2;
- (id)_getLifecycleQueueForIdentity:(id)a0;
- (id)initWithBundlePropertiesManager:(id)a0 entitlementManager:(id)a1 jetsamBandProvider:(id)a2 delegate:(id)a3;

@end
