@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, STSXPCClientNotificationListenerDelegate;

@interface STSXPCClientNotificationListener : NSObject <NSXPCListenerDelegate, STSXPCClientNotificationListenerProtocol>

@property (retain, nonatomic) NSXPCListener *xpc;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;
@property (readonly, weak, nonatomic) NSObject<STSXPCClientNotificationListenerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidateXPCConnection;
- (void)activateISO18013CredentialWithIdentifier:(id)a0 elementSelection:(id)a1 authData:(id)a2 completion:(id /* block */)a3;
- (void)sendConnectionHandoverStarted;
- (void)sendConnectionHandoverCompleted;
- (oneway void)transactionStarted:(unsigned long long)a0;
- (oneway void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (oneway void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (oneway void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (oneway void)sessionTranscriptGenerated:(id)a0;
- (id)_asynchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (id)_stsHandoverNotificationListenerProtocol;
- (id)_stsHandoverNotificationListenerCallbackProtocol;
- (id)_generateFromCredRequest:(id)a0;
- (unsigned long long)_translateFromCarrierConnectionStatus:(unsigned long long)a0;
- (oneway void)dummyStart;
- (oneway void)processCredentialRequestList:(id)a0 readerAuthInfo:(id)a1;
- (oneway void)iso18013ReaderReceive:(id)a0 status:(id)a1;
- (oneway void)receivedRawDataFromAlternativeCarrier:(id)a0 dataPending:(BOOL)a1;
- (void)alternativerCarrierSend:(id)a0 completion:(id /* block */)a1;
- (void)sendISO18013SessionEstablishment:(id)a0 completion:(id /* block */)a1;
- (void)sendISO18013SessionData:(id)a0 status:(id)a1 completion:(id /* block */)a2;
- (void)testGetRemoteTransceiverProxyXPCEndpointWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;

@end
