@class NSHashTable, RBSProcessIdentity, NSSet, NSMutableDictionary, RBSProcessHandle, NSObject, NSMutableSet, NSMapTable;
@protocol OS_xpc_object, RBSConnectionServiceDelegate, OS_dispatch_queue;

@interface RBSConnection : NSObject <RBSClientProtocol, RBSServiceLocalProtocol> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_handleConnection;
    RBSProcessHandle *_handle;
    id<RBSConnectionServiceDelegate> _serviceDelegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assertionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processExpirationLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_handshakeQueue;
    NSObject<OS_dispatch_queue> *_monitorCalloutQueue;
    NSMapTable *_acquiredAssertionsByIdentifier;
    NSHashTable *_processMonitors;
    NSMutableDictionary *_stateByIdentity;
    NSSet *_preventLaunchPredicates;
    NSMutableSet *_inheritances;
    NSHashTable *_expirationWarningClients;
    NSMutableDictionary *_deathHandlers;
    unsigned long long _state;
}

@property (readonly, nonatomic) RBSProcessHandle *handle;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;

+ (id)sharedInstance;
+ (id)handshakeQueue;
+ (void)setInDaemon;
+ (id)connectionQueue;

- (id)init;
- (id)infoPlistResultForInstance:(id)a0 forKeys:(id)a1 error:(out id *)a2;
- (oneway void)async_observedPreventLaunchPredicatesUpdate:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)preventLaunchPredicatesWithError:(out id *)a0;
- (BOOL)executeTerminateRequest:(id)a0 assertion:(out id *)a1 error:(out id *)a2;
- (id)busyExtensionInstancesFromSet:(id)a0 error:(out id *)a1;
- (id)handleForPredicate:(id)a0 error:(out id *)a1;
- (oneway void)async_processDidExit:(id)a0 withContext:(id)a1;
- (oneway void)async_observedProcessExitEvents:(id)a0 completion:(id /* block */)a1;
- (id)limitationsForInstance:(id)a0 error:(out id *)a1;
- (id)identifiersForStateCaptureSubsystems:(out id *)a0;
- (id)observeProcessAssertionsExpirationWarningWithBlock:(id /* block */)a0;
- (BOOL)invalidateAssertion:(id)a0 error:(out id *)a1;
- (id)hostProcessForInstance:(id)a0 error:(out id *)a1;
- (void)registerServiceDelegate:(id)a0;
- (oneway void)async_assertionsDidInvalidate:(id)a0 withError:(id)a1;
- (void)subscribeToProcessDeath:(id)a0 handler:(id /* block */)a1;
- (oneway void)async_observedProcessStatesDidChange:(id)a0 completion:(id /* block */)a1;
- (oneway void)async_assertionWillInvalidate:(id)a0;
- (id)handleForKey:(id)a0;
- (void)unsubscribeProcessStateMonitor:(id)a0 configuration:(id)a1;
- (id)acquireAssertion:(id)a0 error:(out id *)a1;
- (id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)a0 error:(out id *)a1;
- (BOOL)subscribeProcessStateMonitor:(id)a0 configuration:(id)a1 error:(out id *)a2;
- (oneway void)async_willExpireAssertionsSoon;
- (oneway void)async_didChangeInheritances:(id)a0 completion:(id /* block */)a1;
- (id)captureStateForSubsystem:(id)a0 error:(out id *)a1;
- (BOOL)invalidateAssertionWithIdentifier:(id)a0 error:(out id *)a1;
- (id)portForIdentifier:(id)a0;
- (id)processName:(id)a0;
- (id)lastExitContextForInstance:(id)a0 error:(out id *)a1;
- (void)intendToExit:(id)a0 withStatus:(id)a1;
- (id)statesForPredicate:(id)a0 withDescriptor:(id)a1 error:(out id *)a2;
- (BOOL)executeLaunchRequest:(id)a0 process:(out id *)a1 assertion:(out id *)a2 error:(out id *)a3;

@end
