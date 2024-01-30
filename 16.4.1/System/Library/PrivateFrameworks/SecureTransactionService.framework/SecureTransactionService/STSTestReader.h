@class NSString, STSXPCClientNotificationListener, NFSecureTransactionServicesHandoverSession, NSData, STSHardwareManagerWrapper, NSObject, STSTimer;
@protocol OS_dispatch_queue;

@interface STSTestReader : NSObject <STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate>

@property (retain, nonatomic) STSXPCClientNotificationListener *stsNotificationListener;
@property (retain, nonatomic) NFSecureTransactionServicesHandoverSession *handoverSession;
@property (copy, nonatomic) id /* block */ tnepStatusHandler;
@property (copy, nonatomic) id /* block */ sessionStartCompletion;
@property (copy, nonatomic) id /* block */ connectionHandler;
@property (copy, nonatomic) id /* block */ sendRequestCompletion;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL alternativeCarrierConnected;
@property (retain, nonatomic) STSTimer *responseTimeout;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSData *sessionTranscriptBytes;
@property (nonatomic) long long transmissionState;
@property (retain, nonatomic) STSHardwareManagerWrapper *nfHwManager;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)connectionHandoverCompleted:(id)a0;
- (void)session:(id)a0 connectionHandoverProcessFailure:(id)a1;
- (void)session:(id)a0 fieldNotification:(id)a1;
- (void)session:(id)a0 tnepService:(id)a1;
- (void)_activateInvalidationHandler:(id)a0;
- (void)_activateOnConnectCompletion;
- (void)_activateSendRequestCompletion:(id)a0 error:(id)a1;
- (void)_activateSessionStartCompletion:(id)a0;
- (void)_activateTnepStatusHandler:(id)a0;
- (id)_translateXPCClientNotificationStatus:(unsigned long long)a0;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierReceived:(id)a0 dataPending:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 queue:(id)a1;
- (void)invalidateWithCode:(unsigned int)a0;
- (void)notificationClientConnected;
- (void)receiveISO18013DeviceResponse:(id)a0 status:(id)a1;
- (void)sendDocumentRequest:(id)a0 timeoutInterval:(double)a1 responseHandler:(id /* block */)a2;
- (void)sendDocumentRequest:(id)a0 timeoutInterval:(double)a1 sessionTermination:(BOOL)a2 responseHandler:(id /* block */)a3;
- (void)sessionTranscriptGenerated:(id)a0;
- (id)startWithHandoverType:(unsigned long long)a0 connectionHandler:(id /* block */)a1 invalidationErrorHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)startWithHandoverType:(unsigned long long)a0 connectionHandler:(id /* block */)a1 invalidationHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)startWithHandoverType:(unsigned long long)a0 tnepStatusHandler:(id /* block */)a1 connectionHandler:(id /* block */)a2 invalidationErrorHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (void)transactionStarted:(unsigned long long)a0;
- (void)xpcInterrupted;
- (void)xpcInvalidated;

@end
