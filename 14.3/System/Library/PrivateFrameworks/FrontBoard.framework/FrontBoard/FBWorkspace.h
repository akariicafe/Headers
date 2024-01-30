@class NSMutableDictionary, FBSceneClientProviderInvalidationAction, FBProcess, BSServiceConnection, NSObject, BSCompoundAssertion, BSServiceConnectionEndpointInjector, NSMutableArray, FBSSerialQueue, NSString, FBWorkspaceEventDispatcherRegistration, BSAuditToken, RBSAssertion;
@protocol BSServiceConnectionHost, FBWorkspaceDelegate, OS_dispatch_queue;

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProvider> {
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
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BOOL _shouldInjectEndpoint;
    BOOL _lock_didReceiveHandshake;
    BOOL _lock_invalidated;
}

@property (weak, nonatomic) id<FBWorkspaceDelegate> delegate;
@property (readonly, weak, nonatomic) FBProcess *process;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_resolveInterruptionPolicy:(long long)a0;

- (id)_sceneForIdentifier:(id)a0;
- (id)init;
- (void)_resolveSceneLifecycleStateAndInterruptionPolicy;
- (void).cxx_destruct;
- (id)registerHost:(id)a0 withSpecification:(id)a1 settings:(id)a2 initialClientSettings:(id)a3 fromRemnant:(id)a4;
- (void)sendActions:(id)a0;
- (oneway void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)_acquireAssertionForReason:(id)a0 withState:(unsigned char)a1;
- (void)_lock_fireInvalidationAction;
- (oneway void)sceneID:(id)a0 didReceiveActions:(id)a1;
- (void)registerInvalidationAction:(id)a0;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (void)host:(id)a0 didReceiveActions:(id)a1;
- (id)_unregisterSceneForIdentifier:(id)a0;
- (void)_lock_enqueueConnectBlock:(id /* block */)a0;
- (oneway void)handshakeWithRemnants:(id)a0;
- (oneway void)sceneID:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)_updateProcessAssertionState;
- (void)unregisterHost:(id)a0;
- (void)_terminateWithReason:(id)a0;

@end
