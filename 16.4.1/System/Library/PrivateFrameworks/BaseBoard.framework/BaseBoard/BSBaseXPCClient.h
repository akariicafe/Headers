@class BSAtomicSignal, NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BSAtomicSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
    int _clientInvalidated;
    int _notifyToken;
    NSObject<OS_xpc_object> *_connection;
    BOOL _suspended;
}

@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

- (void)resumeConnection;
- (void)suspendConnection;
- (void)_sendReplyForMessage:(id)a0 messagePacker:(id /* block */)a1;
- (void)_sendReply:(id)a0 messagePacker:(id /* block */)a1;
- (id)_getStringFromMessage:(id)a0 key:(char *)a1;
- (void)_sendMessageReply:(id)a0 messagePacker:(id /* block */)a1;
- (id)initWithEndpoint:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)_connection;
- (void)_setEndpoint:(id)a0;
- (id)_connectionInstanceUUID;
- (id)_errorFromMessageIfAny:(id)a0;
- (void)_sendMessage:(id /* block */)a0;
- (void)_sendMessage:(id /* block */)a0 withReplyHandler:(id /* block */)a1 waitForReply:(BOOL)a2 waitDuration:(unsigned long long)a3;
- (id)initWithServiceName:(id)a0 endpoint:(id)a1;
- (void)queue_clientWasInvalidated;
- (id)queue_connection;
- (void)queue_connectionWasCreated;
- (void)queue_connectionWasDestroyed;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasSuspended;
- (void)queue_handleError:(id)a0;
- (void)queue_handleMessage:(id)a0;
- (void)reconnectIfNecessary;

@end
