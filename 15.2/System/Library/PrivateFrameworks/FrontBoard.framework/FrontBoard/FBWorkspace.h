@class RBSAssertion, NSString, BSCompoundAssertion, BSAuditToken, NSMutableDictionary, BSServiceConnection, FBWorkspaceEventDispatcherRegistration, NSMutableArray, NSObject, FBSSerialQueue, FBSceneClientProviderInvalidationAction, FBProcess;
@protocol BSServiceConnectionHost, FBWorkspaceDelegate, OS_dispatch_queue;

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProviderInternal, FBSceneClientProvider> {
    id<FBWorkspaceDelegate> _weak_delegate;
    FBProcess *_weak_process;
    FBWorkspaceEventDispatcherRegistration *_lock_eventDispatcher;
    BSServiceConnection<BSServiceConnectionHost> *_lock_connection;
    NSMutableArray *_lock_waitForConnectBlocks;
    NSMutableDictionary *_lock_identifierToSceneMap;
    NSMutableDictionary *_lock_identifierToRemnantsMap;
    NSMutableArray *_lock_pendedRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_workspaceQueue;
    FBSceneClientProviderInvalidationAction *_lock_invalidationAction;
    RBSAssertion *_lock_lifeAssertion;
    RBSAssertion *_lock_connectAssertion;
    RBSAssertion *_lock_afterlifeAssertion;
    long long _lock_activeInterruptionPolicy;
    unsigned char _lock_activeAssertionState;
    BSCompoundAssertion *_compoundAssertion;
    RBSAssertion *_workspaceServiceInjector;
    BOOL _shouldInjectEndpoint;
    BOOL _lock_didReceiveHandshake;
    BOOL _lock_invalidated;
}

@property (nonatomic, setter=test_setRejectAllSceneClients:) BOOL test_rejectAllSceneClients;
@property (weak, nonatomic) id<FBWorkspaceDelegate> delegate;
@property (readonly, weak, nonatomic) FBProcess *process;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unregisterHost:(id)a0;
- (oneway void)handshakeWithRemnants:(id)a0;
- (oneway void)sceneID:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)_resolveSceneLifecycleStateAndInterruptionPolicy;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (id)_unregisterSceneForHost:(id)a0;
- (void)sendActions:(id)a0;
- (void)_lock_enqueueConnectBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateProcessAssertionState;
- (id)init;
- (void)host:(id)a0 didReceiveActions:(id)a1;
- (oneway void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)_sceneForHost:(id)a0;
- (void)dealloc;
- (id)_acquireAssertionForReason:(id)a0 withState:(unsigned char)a1;
- (id)_sceneForIdentifier:(id)a0;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;
- (void)registerInvalidationAction:(id)a0;
- (void)_lock_fireInvalidationAction;
- (void)_terminateWithReason:(id)a0;
- (oneway void)sceneID:(id)a0 didReceiveActions:(id)a1;

@end
