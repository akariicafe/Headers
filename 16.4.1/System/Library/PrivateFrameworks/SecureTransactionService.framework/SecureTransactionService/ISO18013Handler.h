@class NSString, STSXPCClientNotificationListener, NFSecureTransactionServicesHandoverSession, STSCredential;
@protocol STSSessionNotificationTesterDelegate;

@interface ISO18013Handler : STSTransactionHandler <STSXPCClientNotificationListenerDelegate, NFSecureTransactionServicesHandoverSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handoverSessionMutex;
    STSXPCClientNotificationListener *_stsNotificationListener;
    id<STSSessionNotificationTesterDelegate> _notificationTesterDelegate;
    NFSecureTransactionServicesHandoverSession *_handoverSession;
    unsigned long long _transactionState;
    STSCredential *_releasedCredential;
    unsigned long long _startTransactionOption;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)stopTransaction;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (void)connectionHandoverCompleted:(id)a0;
- (void)session:(id)a0 connectionHandoverProcessFailure:(id)a1;
- (void)session:(id)a0 fieldChange:(BOOL)a1;
- (void)session:(id)a0 fieldNotification:(id)a1;
- (void)session:(id)a0 tnepService:(id)a1;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (id)activateWithHandoffToken:(id)a0;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierReceived:(id)a0 dataPending:(BOOL)a1;
- (void)notificationClientConnected;
- (void)processISO18013CredentialProposals:(id)a0 readerAuthInfo:(id)a1;
- (unsigned char)supportedCredentialType;
- (void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (void)transactionStarted:(unsigned long long)a0;
- (void)xpcInterrupted;
- (void)xpcInvalidated;

@end
