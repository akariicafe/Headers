@class NSObject;
@protocol OS_xpc_object, RMConnectionLifecycleDelegate, OS_dispatch_queue, RMConnectionDataDelegate;

@interface RMConnectionEndpoint : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *streamingServerConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *streamingClientConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *streamingClientListener;
@property (retain, nonatomic) NSObject<OS_xpc_object> *messagingConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (weak, nonatomic) id<RMConnectionLifecycleDelegate> connectionDelegate;
@property (weak, nonatomic) id<RMConnectionDataDelegate> dataDelegate;

- (void).cxx_destruct;
- (void)handleInterruption;
- (BOOL)isValid;
- (void)pause;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (void)start;
- (void)invalidate;
- (void)stopServingStream;
- (BOOL)startServingStreamWithHandler:(id)a0;
- (void)stopReceivingStream;
- (void)startServingStreamToEndpoint:(id)a0 error:(id *)a1;
- (void)wrapReplyToXpcMessage:(id)a0 withName:(id)a1 data:(id)a2;
- (void)handleXpcMessage:(id)a0 replyBlock:(id /* block */)a1;
- (void)handleStreamXpcError:(id)a0 withErrorHandler:(id /* block */)a1;
- (void)startReceivingStreamOnConnection:(id)a0 errorHandler:(id /* block */)a1;
- (void)handleStreamXpcReply:(id)a0 withErrorHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0 withData:(id)a1;
- (void)sendMessage:(id)a0 withData:(id)a1 reply:(id /* block */)a2;
- (void)requestStreamWithMessage:(id)a0 data:(id)a1 errorHandler:(id /* block */)a2;

@end
