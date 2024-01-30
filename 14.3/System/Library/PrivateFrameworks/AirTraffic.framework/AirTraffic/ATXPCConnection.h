@class NSString, NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface ATXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableSet *_outstandingMessages;
}

@property (readonly) NSString *serviceName;
@property (copy, nonatomic) id /* block */ lockdownHandler;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (nonatomic) BOOL assertionHeld;
@property (retain, nonatomic) id context;

- (id)eventQueue;
- (void)shutdown;
- (void)sendMessage:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 onQueue:(id)a1;
- (void)dealloc;
- (void)_handleXPCError:(id)a0;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)_setEventHandlerOnConnection:(id)a0;
- (void)_sendMessage:(id)a0 handler:(id /* block */)a1;
- (void)_handleLockdownMessage:(void *)a0;
- (void)_handleXPCMessage:(id)a0;
- (void)_registerMessage:(id)a0;
- (void)_removeMessage:(id)a0;
- (unsigned long long)_outstandingMessages;

@end
