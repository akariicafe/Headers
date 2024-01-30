@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, MBConnectionHandler;

@interface MBConnection : NSObject {
    _Atomic int _pid;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *processName;
@property (weak, nonatomic) id<MBConnectionHandler> messageHandler;

- (void)cancel;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 barrierBlock:(id /* block */)a1;
- (void)_handleXPCError:(id)a0;
- (void)_handleXPCEvent:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)description;
- (void)_refreshProcessInfoWithXPCConnection:(id)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1;
- (void)resume;
- (void)_setEventHandlerForXPCConnection:(id)a0;
- (void)suspend;
- (id)sendMessageWithReplyAndSync:(id)a0 error:(id *)a1;

@end
