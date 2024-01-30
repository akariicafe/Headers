@class PKDAPairingSessionManager, PKDASessionManager, NSObject;
@protocol OS_dispatch_queue;

@interface PKDAManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PKDAPairingSessionManager *_pairingSessionManager;
    PKDASessionManager *_managementSessionManager;
    PKDASessionManager *_sharingSessionManager;
}

@property (readonly, nonatomic, getter=isSupported) BOOL supported;

- (void)generateTransactionKeyWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)statusForReceivedSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (void)prewarmWithIssuerName:(id)a0 completion:(id /* block */)a1;
- (id)storeSEBlobForSubcredentialIdentifier:(id)a0 seBlob:(id)a1;
- (void)immobilizerTokensCountForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 withSharedCredential:(id)a2 completion:(id /* block */)a3;
- (void)listDACredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)statusForSentSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)listCredentialsWithCompletion:(id /* block */)a0;
- (id)description;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)probeTerminalForPairingStatusWithCompletion:(id /* block */)a0;
- (id)init;
- (id)decryptData:(id)a0 withCredential:(id)a1 ephemeralPublicKey:(id)a2;
- (void)declineSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)deleteCredentials:(id)a0 completion:(id /* block */)a1;
- (void)updateTrackingAttestation:(id)a0 forCredential:(id)a1 decrytedData:(id)a2 completion:(id /* block */)a3;
- (void)listCredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)generateTransactionKeyWithParameters:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;

@end
