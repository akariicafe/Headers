@class NSString, BSServiceQuality, BSXPCCoder, BSServiceInterface, BSXPCServiceConnection, RBSTarget, NSObject, BSXPCServiceConnectionProxy;
@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;

@interface BSXPCServiceConnectionEventHandler : NSObject {
    RBSTarget *_assertionTarget;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _nonLaunchingAware;
    BSXPCServiceConnection *_lock_connection;
    NSObject<OS_xpc_object> *_lock_activeXPCConnection;
    NSObject<OS_dispatch_queue> *_lock_xpcConnectionTargetQueue;
    BSXPCServiceConnectionProxy *_lock_remoteTarget;
    id _interfaceTarget;
    id /* block */ _connectionHandler;
    id /* block */ _noMoreChildrenHandler;
    id /* block */ _messageHandler;
    id /* block */ _errorHandler;
    id /* block */ _activationHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    id _context;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSServiceDispatchingQueue> _targetDispatchingQueue;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    BSXPCCoder *_initiatingContext;
}

- (id)init;
- (void).cxx_destruct;

@end
