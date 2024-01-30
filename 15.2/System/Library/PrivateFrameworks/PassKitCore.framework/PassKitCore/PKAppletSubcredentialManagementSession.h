@class DAKeyManagementSession;

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (retain, nonatomic) DAKeyManagementSession *session;

+ (id)createSessionWithDelegate:(id)a0;

- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (void)immobilizerTokensCountForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)listCredentialsWithCompletion:(id /* block */)a0;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (id)trackSubcredential:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 withReceipt:(id)a4;
- (void)listSharingInvitationsForKeyIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)listReceivedSharingInvitationsWithCompletion:(id /* block */)a0;
- (void)deleteCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;

@end
