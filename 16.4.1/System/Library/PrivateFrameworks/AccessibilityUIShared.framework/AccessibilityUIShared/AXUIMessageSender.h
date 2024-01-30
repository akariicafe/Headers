@class NSMutableArray, AXAccessQueue;
@protocol AXUIMessageSenderDelegate;

@interface AXUIMessageSender : NSObject

@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (retain, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue;
@property (nonatomic, getter=isSendingMessage) BOOL sendingMessage;
@property (weak, nonatomic) id<AXUIMessageSenderDelegate> delegate;

- (void)_sendLaunchAngelMessage:(id)a0 context:(void *)a1 remainingAttempts:(unsigned long long)a2 previousError:(id)a3 completion:(id /* block */)a4;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 context:(void *)a2 targetAccessQueue:(id)a3 completionRequiresWritingBlock:(BOOL)a4 completion:(id /* block */)a5;
- (void)_sendXPCMessage:(id)a0 context:(void *)a1 remainingAttempts:(unsigned long long)a2 previousError:(id)a3 completion:(id /* block */)a4;
- (void)_performBlock:(id /* block */)a0 inAccessQueue:(id)a1 treatAsWritingBlock:(BOOL)a2;
- (void)_didFinishSendingXPCMessage:(id)a0 replyCustomData:(void *)a1;
- (id)init;
- (id)sendSynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 context:(void *)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
