@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    NSString *_serviceName;
    int _notifyToken;
}

@property (nonatomic, getter=usesAnonymousConnection) BOOL usesAnonymousConnection;

+ (BOOL)_registersWithNotifyd;

- (void)run;
- (void)_sendMessageReply:(id)a0 messagePacker:(id /* block */)a1;
- (void)resumeServer;
- (id)initWithServiceName:(id)a0 onQueue:(id)a1;
- (void)dealloc;
- (void)queue_handleMessage:(id)a0 client:(id)a1;
- (void)_sendReply:(id)a0 messagePacker:(id /* block */)a1;
- (id)initWithServiceName:(id)a0;
- (void)_sendReplyForMessage:(id)a0 messagePacker:(id /* block */)a1;
- (void)queue_clientRemoved:(id)a0;
- (id)_getStringFromMessage:(id)a0 key:(char *)a1;
- (void)_invalidate;
- (id)queue;
- (id)_connection;
- (id)queue_newClientForConnection:(id)a0;
- (BOOL)queue_shouldAcceptNewConnection:(id)a0;
- (id)_copyEndpoint;
- (void)queue_clientAdded:(id)a0;
- (Class)queue_classForNewClientConnection:(id)a0;
- (id)_queue_clientForConnection:(id)a0;
- (void)registerServerSuspended;
- (id)_clients;

@end
