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

- (void)_sendMessageReply:(id)a0 messagePacker:(id /* block */)a1;
- (void)queue_connectionWasResumed;
- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (void)_sendReply:(id)a0 messagePacker:(id /* block */)a1;
- (void)queue_handleError:(id)a0;
- (void)queue_clientWasInvalidated;
- (void)queue_connectionWasSuspended;
- (id)_connectionInstanceUUID;
- (void)queue_connectionWasCreated;
- (void)reconnectIfNecessary;
- (void)queue_connectionWasDestroyed;
- (id)_errorFromMessageIfAny:(id)a0;
- (id)queue_connection;
- (id)initWithServiceName:(id)a0;
- (void)_sendReplyForMessage:(id)a0 messagePacker:(id /* block */)a1;
- (void)_setEndpoint:(id)a0;
- (void)resumeConnection;
- (id)_getStringFromMessage:(id)a0 key:(char *)a1;
- (void)_sendMessage:(id /* block */)a0;
- (id)_connection;
- (void)suspendConnection;
- (void)queue_handleMessage:(id)a0;
- (void)queue_connectionWasInterrupted;
- (void)_sendMessage:(id /* block */)a0 withReplyHandler:(id /* block */)a1 waitForReply:(BOOL)a2 waitDuration:(unsigned long long)a3;
- (void)invalidate;
- (id)initWithServiceName:(id)a0 endpoint:(id)a1;
- (void)queue_connectionWasInvalidated;

@end
