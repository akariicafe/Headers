@class DAKeyManagementSession;

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (retain, nonatomic) DAKeyManagementSession *session;

+ (id)createSessionWithDelegate:(id)a0;

- (void)revokeCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)decryptData:(id)a0 withCredential:(id)a1 ephemeralPublicKey:(id)a2 completion:(id /* block */)a3;
- (void)listCredentialsWithCompletion:(id /* block */)a0;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)immobilizerTokensCountForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (id)trackSubcredential:(id)a0 withReceipt:(id)a1;
- (void)listSharingInvitationsForKeyIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)listReceivedSharingInvitationsWithCompletion:(id /* block */)a0;

@end
