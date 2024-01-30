@class NSObject;
@protocol OS_xpc_object;

@interface NEIPC : NSObject

@property (copy) id /* block */ messageHandler;
@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (readonly) BOOL connected;

- (void)logMessageType:(unsigned int)a0 data:(id)a1 actionString:(id)a2;
- (void)handleMessage:(id)a0 withHandler:(id /* block */)a1;
- (void)setupMessageHandlingWithQueue:(id)a0;
- (void)startWithEndpoint:(id)a0 queue:(id)a1 messageHandler:(id /* block */)a2;
- (BOOL)sendMessageWithType:(unsigned int)a0 data:(id)a1 replyQueue:(id)a2 replyHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)startInListenModeWithQueue:(id)a0 messageHandler:(id /* block */)a1;
- (void)stop;

@end
