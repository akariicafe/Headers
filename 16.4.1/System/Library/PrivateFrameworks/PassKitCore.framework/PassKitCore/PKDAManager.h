@class PKDAPairingSessionManager, PKDASessionManager, NSObject;
@protocol OS_dispatch_queue;

@interface PKDAManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PKDAPairingSessionManager *_pairingSessionManager;
    PKDASessionManager *_managementSessionManager;
    PKDASessionManager *_sharingSessionManager;
}

@property (readonly, nonatomic, getter=isSupported) BOOL supported;

- (void)probeTerminalForPairingStatusWithCompletion:(id /* block */)a0;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)rejectInvitation:(id)a0 completion:(id /* block */)a1;
- (void)listCredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)statusForSentSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createInviteForShare:(id)a0 forCredential:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (void)deleteCredentials:(id)a0 completion:(id /* block */)a1;
- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)outstandingInvitesForCredential:(id)a0 completion:(id /* block */)a1;
- (void)updateTrackingAttestation:(id)a0 forCredential:(id)a1 decrytedData:(id)a2 completion:(id /* block */)a3;
- (id)storeSEBlobForSubcredentialIdentifier:(id)a0 seBlob:(id)a1;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (id)createPrivacyKeyForGroupIdentifier:(id)a0 outError:(id *)a1;
- (void)_deviceCredentialForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (id)privacyKeysForGroupIdentifier:(id)a0 privacyKeyIdentifier:(id)a1 outError:(id *)a2;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)listDACredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)declineSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)handleOutstandingMessage:(id)a0 subcredentialIdentifier:(id)a1 credentialShareIdentifier:(id)a2 transportIdentifier:(id)a3 completion:(id /* block */)a4;
- (BOOL)hasLongTermPrivacyKeyForGroupIdentifier:(id)a0;
- (void)statusForReceivedSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)prewarmWithManufacturerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setTransportChannelIdentifier:(id)a0 forCredential:(id)a1 forCredentialShare:(id)a2 completion:(id /* block */)a3;
- (void)immobilizerTokensCountForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)deletePrivacyKey:(id)a0 outError:(id *)a1;
- (id)init;
- (void)generateTransactionKeyWithParameters:(id)a0 withCompletion:(id /* block */)a1;
- (void)generateTransactionKeyWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 completion:(id /* block */)a2;
- (void)acceptShareForSharingMessage:(id)a0 transportChannelIdentifier:(id)a1 activationCode:(id)a2 completion:(id /* block */)a3;
- (id)description;
- (id)decryptPayload:(id)a0 groupIdentifier:(id)a1 outError:(id *)a2;
- (id)decryptData:(id)a0 withCredential:(id)a1 ephemeralPublicKey:(id)a2;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)declineSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)retryActivationCodeForCredentialIdentifier:(id)a0 activationCode:(id)a1 completion:(id /* block */)a2;
- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (id)encryptData:(id)a0 scheme:(id)a1 recipientPublicKey:(id)a2 outError:(id *)a3;
- (void)listCredentialsWithCompletion:(id /* block */)a0;

@end
