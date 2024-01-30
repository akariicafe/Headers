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

- (BOOL)sendSimpleMessage:(id)a0 enqueueError:(id *)a1;
- (BOOL)sendSimpleMessageWithResult:(id)a0;
- (id)_serviceName;
- (void)relinquishAssertionWithType:(id)a0 identifier:(id)a1;
- (void)sendSimpleMessage:(id)a0;
- (void)_wasDisconnectedFromClient;
- (id)sendMessage:(id)a0;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 handler:(id /* block */)a2;
- (BOOL)_connectIfNecessary;
- (BOOL)_connectServerIfNecessary;
- (void)_didConnectToServer;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 objectResultHandler:(id /* block */)a2;
- (id)_sendMessage:(id)a0 error:(id *)a1;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;
- (void)_processAssertionBacklog;
- (id)sendSimpleMessageWithObjectResult:(id)a0;
- (void)_initializeAssertionBookkeeping;
- (void)_didConnectToClient;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 boolResultHandler:(id /* block */)a2;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
