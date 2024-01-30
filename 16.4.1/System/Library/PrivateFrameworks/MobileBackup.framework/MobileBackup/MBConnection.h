@class NSString, NSObject;
@protocol OS_xpc_object, MBConnectionDelegate, OS_dispatch_queue;

@interface MBConnection : NSObject {
    _Atomic int _pid;
}

@property (weak) id<MBConnectionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *processName;
@property (retain) NSString *personaIdentifier;

- (void)sendMessage:(id)a0;
- (void)suspend;
- (id)initWithXPCConnection:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)initWithServiceName:(id)a0;
- (void)cancel;
- (void)_setEventHandlerForXPCConnection:(id)a0;
- (id)sendMessageWithReplyAndSync:(id)a0 error:(id *)a1;
- (void)_handleXPCEvent:(id)a0;
- (void)sendMessage:(id)a0 barrierBlock:(id /* block */)a1;
- (id)initWithServiceName:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)description;
- (void)_refreshProcessInfoWithXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)_handleXPCError:(id)a0;

@end
