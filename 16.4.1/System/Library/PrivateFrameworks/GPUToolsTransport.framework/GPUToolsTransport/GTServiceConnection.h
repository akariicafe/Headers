@class NSUUID, NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTServiceConnection : NSObject <GTXPCConnection> {
    id<GTXPCConnection> _connection;
    unsigned long long _servicePort;
}

@property (readonly) NSUUID *deviceUUID;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;

- (void)sendMessage:(id)a0;
- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)sendMessageWithReplySync:(id)a0;
- (void)dispatchMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 device:(id)a1 port:(unsigned long long)a2;
- (void)_setRoutingPropertiesForMessage:(id)a0;
- (void)_setRoutingPropertiesForMessage:(id)a0 withReplyStreamId:(unsigned long long)a1;
- (void)activateWithMessageHandler:(id /* block */)a0 andErrorHandler:(id /* block */)a1;
- (void)deregisterDispatcher:(unsigned long long)a0;
- (unsigned long long)registerDispatcher:(id)a0;
- (void)registerDispatcher:(id)a0 forPort:(unsigned long long)a1;
- (void)sendMessage:(id)a0 withReplyStreamId:(unsigned long long)a1;
- (void)sendMessage:(id)a0 withReplyStreamId:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (id)sendMessageWithReplySync:(id)a0 replyStreamId:(unsigned long long)a1;

@end
