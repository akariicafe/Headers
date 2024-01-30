@class BSXPCServiceConnectionContext, NSString, BSXPCServiceConnectionPeer, RBSTarget, NSObject, NSMutableArray, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionMessage, BSXPCServiceConnectionEventHandler;
@protocol OS_xpc_object, BSServiceDispatchingQueue, BSXPCServiceConnectionParent;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSInvalidatable> {
    NSString *_proem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_activationGeneration;
    BSXPCServiceConnectionPeer *_lock_peer;
    id<BSServiceDispatchingQueue> _configured_connectionQueue;
    NSObject<OS_xpc_object> *_lock_connection;
    NSMutableArray *_lock_childConnections;
    NSMutableArray *_lock_connectionActivatedEvents;
    NSMutableArray *_lock_connectionEstablishedEvents;
    BSXPCServiceConnectionMessage *_lock_activationMessage;
    BSXPCServiceConnectionMessageReply *_lock_activationReply;
    BSXPCServiceConnectionMessage *_lock_invalidationMessage;
    BSXPCServiceConnectionEventHandler *_lock_eventHandler;
    id<BSXPCServiceConnectionParent> _lock_parent;
    BOOL _lock_configured;
    BOOL _lock_activated;
    BOOL _lock_sendsMustWaitForEstablished;
    BOOL _lock_established;
    BOOL _lock_remotelyInvalidated;
    BOOL _lock_clientInvalidated;
    BOOL _lock_clientInvalidatedExplicitly;
    BOOL _lock_invalidated;
    RBSTarget *_remoteAssertionTarget;
    BSXPCServiceConnectionContext *_context;
}

@property (readonly, nonatomic, getter=_isInvalidated) BOOL _invalidated;
@property (readonly, nonatomic, getter=_isClientInvalidated) BOOL _clientInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)_invalidateChildConnection:(id)a0;

@end
