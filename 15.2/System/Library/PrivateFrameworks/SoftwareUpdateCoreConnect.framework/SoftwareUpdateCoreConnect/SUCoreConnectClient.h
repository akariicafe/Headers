@class NSXPCConnection, SUCoreLog, SUCoreConnectClientPolicy, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) SUCoreConnectClientPolicy *policy;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientConnectionStateAccessQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientMessageQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientReplyCompletionQueue;

- (void)_invalidateConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectProtocolFromServerRequestClientID:(id /* block */)a0;
- (void)connectProtocolFromServerSendClientMessage:(id)a0;
- (void)connectProtocolFromServerSendClientMessage:(id)a0 reply:(id /* block */)a1;
- (void)_connectionDropped;
- (void)connectClientSendServerMessage:(id)a0 proxyObject:(id)a1 withReply:(id /* block */)a2;
- (void)_handleConnectionError:(id)a0 method:(const char *)a1;
- (void)connectToServerWithCompletion:(id /* block */)a0;
- (id)initWithClientPolicy:(id)a0;
- (void)connectClientSendServerMessage:(id)a0;
- (void)forceCloseConnection;

@end
