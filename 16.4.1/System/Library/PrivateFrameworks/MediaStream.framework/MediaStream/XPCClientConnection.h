@class NSString, NSObject;
@protocol XPCClientConnectionDelegate, OS_xpc_object, OS_dispatch_queue;

@interface XPCClientConnection : NSObject {
    NSString *_serviceName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<XPCClientConnectionDelegate> delegate;

- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)_reallySendMessage:(id)a0 handler:(id /* block */)a1 sequence:(unsigned long long)a2 retryCount:(unsigned long long)a3;
- (void)_handleIncomingMessage:(id)a0;
- (void)_handleConnectionEvent:(id)a0;
- (id)initWithServiceName:(id)a0 delegate:(id)a1;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 withHandler:(id /* block */)a1;

@end
