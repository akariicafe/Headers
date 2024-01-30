@class NSString, STSXPCClientNotificationListener, NFSecureTransactionServicesHandoverSession, STSCredential;
@protocol STSSessionNotificationTesterDelegate;

@interface ISO18013Handler : STSTransactionHandler <STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate> {
    STSXPCClientNotificationListener *_stsNotificationListener;
    id<STSSessionNotificationTesterDelegate> _notificationTesterDelegate;
    NFSecureTransactionServicesHandoverSession *_handoverSession;
    unsigned long long _transactionState;
    STSCredential *_releasedCredential;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)stopTransaction;
- (void)session:(id)a0 fieldNotification:(id)a1;
- (void)session:(id)a0 fieldChange:(BOOL)a1;
- (void)session:(id)a0 tnepService:(id)a1;
- (void)session:(id)a0 connectionHandoverProcessFailure:(id)a1;
- (void)connectionHandoverCompleted:(id)a0;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (id)activateWithDelegate:(id)a0 handoffToken:(id)a1;
- (void)transactionStarted:(unsigned long long)a0;
- (void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (void)xpcInvalidated;
- (void)xpcInterrupted;
- (void)notificationClientConnected;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)processISO18013CredentialProposals:(id)a0 readerAuthInfo:(id)a1;
- (unsigned char)supportedCredentialType;

@end
