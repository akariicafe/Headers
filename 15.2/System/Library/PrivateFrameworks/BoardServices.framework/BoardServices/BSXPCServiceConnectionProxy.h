@class RBSAssertion, BSXPCServiceConnection, BSObjCProtocol, NSArray, NSObject, RBSTarget;
@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;

@interface BSXPCServiceConnectionProxy : NSObject {
    BSXPCServiceConnection *_connection;
    BSObjCProtocol *_remoteProtocol;
    NSObject<OS_xpc_object> *_underlyingConnection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSServiceDispatchingQueue> _replyQueue;
    RBSTarget *_target;
    NSArray *_attributes;
    id /* block */ _assertionProvider;
    RBSAssertion *_lock_assertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_messagesCount;
}

- (void)dealloc;

@end
