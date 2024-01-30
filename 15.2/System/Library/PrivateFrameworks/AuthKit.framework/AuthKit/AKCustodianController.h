@class AKCustodianDaemonConnection;

@interface AKCustodianController : NSObject <AKCustodianDaemonProtocol> {
    AKCustodianDaemonConnection *_daemonConnection;
}

- (void)finalizeCustodianSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startCustodianRecoveryTransactionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchCustodianRecoveryCodeConfigurationWithCompletion:(id /* block */)a0;
- (void)initiateCustodianSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)revokeCustodianWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)startCustodianRecoveryRequestWithContext:(id)a0 completion:(id /* block */)a1;
- (void)sendEmbargoEndNotificationFeedbackWithContext:(id)a0 urlKey:(id)a1 completion:(id /* block */)a2;
- (void)fetchCustodianDataRecoveryKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)fetchCustodianRecoveryTokenWithContext:(id)a0 completion:(id /* block */)a1;
- (void)updateCustodianRecoveryKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performTrustedContactsDataSync:(id)a0 completion:(id /* block */)a1;

@end
