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

- (id)initWithXPCConnection:(id)a0;
- (id)createXPCEndpoint;
- (void)sendMessage:(id)a0;
- (void)sendSynchronousMessage:(id)a0 withReply:(id /* block */)a1;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)_reloadEventHandler;
- (id)_initSKXPCConnection;

@end
