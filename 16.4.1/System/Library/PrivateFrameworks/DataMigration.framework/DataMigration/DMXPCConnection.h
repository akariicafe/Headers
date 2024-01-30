@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DMXPCConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ messageHandler;

- (void)handleMessage:(id)a0;
- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithServiceName:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)_handleMessage:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (void)invalidate;
- (id)sendMessageSync:(id)a0;
- (void).cxx_destruct;
- (void)resume;

@end
