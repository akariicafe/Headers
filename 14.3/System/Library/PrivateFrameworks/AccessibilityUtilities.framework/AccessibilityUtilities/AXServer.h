@class NSString, AXIPCServer, AXDispatchTimer, AXIPCClient, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject

@property (copy, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSMutableArray *assertionWorkBacklog;
@property (retain, nonatomic) AXDispatchTimer *assertionRetryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (retain, nonatomic) AXIPCClient *client;
@property (retain, nonatomic) AXIPCServer *server;
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;

- (void)_didConnectToServer;
- (id)_sendMessage:(id)a0 error:(id *)a1;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 handler:(id /* block */)a2;
- (BOOL)_connectServerIfNecessary;
- (void)acquireAssertionWithType:(id)a0 identifier:(id)a1;
- (void)_processAssertionBacklog;
- (BOOL)_connectIfNecessary;
- (id)_serviceName;
- (void)relinquishAssertionWithType:(id)a0 identifier:(id)a1;
- (void)_initializeAssertionBookkeeping;
- (id)sendMessage:(id)a0;
- (void)_willClearServer;
- (void)_didConnectToClient;
- (void)sendSimpleMessage:(id)a0;
- (BOOL)sendSimpleMessage:(id)a0 enqueueError:(id *)a1;
- (id)init;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 objectResultHandler:(id /* block */)a2;
- (BOOL)sendSimpleMessageWithResult:(id)a0;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;
- (void)_wasDisconnectedFromClient;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 boolResultHandler:(id /* block */)a2;
- (id)sendSimpleMessageWithObjectResult:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
