@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SKXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _disconnectBlock;
    id /* block */ _messageBlock;
}

@property (copy) id /* block */ disconnectBlock;
@property (copy) id /* block */ messageBlock;

- (void)sendMessage:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createXPCEndpoint;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)sendSynchronousMessage:(id)a0 withReply:(id /* block */)a1;
- (id)initWithServiceName:(id)a0;
- (void)_reloadEventHandler;
- (id)_initSKXPCConnection;

@end
