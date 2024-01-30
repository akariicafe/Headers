@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_os_transaction;

@interface GTLocalXPCConnection : NSObject <GTXPCConnection> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_os_transaction> *_transaction;
    NSMutableDictionary *_dispatchers;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;

- (id)initWithXPCConnection:(id)a0;
- (void)sendMessage:(id)a0;
- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)sendMessageWithReplySync:(id)a0;
- (void)dispatchMessage:(id)a0;
- (void).cxx_destruct;
- (void)activateWithMessageHandler:(id /* block */)a0 andErrorHandler:(id /* block */)a1;
- (void)deregisterDispatcher:(unsigned long long)a0;
- (id)initWithTransactionScopedXPCConnection:(id)a0;
- (unsigned long long)registerDispatcher:(id)a0;
- (void)registerDispatcher:(id)a0 forPort:(unsigned long long)a1;

@end
