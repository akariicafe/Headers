@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SPXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _ownsQueue;
    NSString *_bundleID;
}

@property (readonly, weak) NSString *serviceName;
@property (readonly, weak) NSString *bundleID;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (retain, nonatomic) id context;

- (id)eventQueue;
- (void)shutdown;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 onQueue:(id)a1;
- (void)dealloc;
- (void)_handleXPCError:(id)a0;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)_setEventHandlerOnConnection:(id)a0;
- (void)_sendMessage:(id)a0 handler:(id /* block */)a1;
- (void)_handleXPCMessage:(id)a0;
- (id)eventQueueWithQOS:(unsigned int)a0;
- (id)initWithXPCConnection:(id)a0 qos:(unsigned int)a1;
- (void)barrier:(id /* block */)a0;

@end
