@class NSMutableSet, NSString, RBSAssertion, BSCompoundAssertion, BSAuditToken, NSMutableDictionary, BSServiceConnection, FBWorkspaceEventDispatcherSource, NSMutableArray, NSObject, FBSSerialQueue, FBProcess;
@protocol BSServiceConnectionHost, FBWorkspaceDelegate, OS_dispatch_queue;

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProviderInternal, FBSceneClientProvider> {
    id<FBWorkspaceDelegate> _weak_delegate;
    FBProcess *_weak_process;
    FBWorkspaceEventDispatcherSource *_lock_eventDispatcherSource;
    BSServiceConnection<BSServiceConnectionHost> *_lock_connection;
    NSMutableArray *_lock_waitForConnectBlocks;
    NSMutableDictionary *_lock_identityToSceneMap;
    NSMutableDictionary *_lock_identityToRemnantsMap;
    NSMutableArray *_lock_pendedRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_workspaceQueue;
    NSMutableSet *_lock_invalidationActions;
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

- (id)_acquireAssertionForReason:(id)a0 withState:(unsigned char)a1;
- (void)unregisterHost:(id)a0;
- (oneway void)sceneID:(id)a0 didReceiveActions:(id)a1;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (id)_sceneForIdentity:(id)a0;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;
- (void)sendActions:(id)a0;
- (void)registerInvalidationAction:(id)a0;
- (void)_lock_enqueueConnectBlock:(id /* block */)a0;
- (id)_sceneForHost:(id)a0;
- (void)_updateProcessAssertionState;
- (id)_unregisterSceneForHost:(id)a0;
- (oneway void)handshakeWithRemnants:(id)a0;
- (void)dealloc;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)_terminateWithReason:(id)a0;
- (oneway void)sceneID:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)_lock_fireInvalidationAction;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (oneway void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_resolveSceneLifecycleStateAndInterruptionPolicy;
- (void)host:(id)a0 didReceiveActions:(id)a1;
- (void).cxx_destruct;

@end
