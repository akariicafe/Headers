@class NSString;

@interface DAKeyManagementSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyBindingAttestationUpdate, DAKeyImmobilizerTokenUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setBindingAttestation:(id)a0 forKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)didEnd:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)listKeysWithSession:(id)a0 seid:(id)a1 callback:(id /* block */)a2;
- (void)listKeysWithHandler:(id /* block */)a0;
- (void)revokeKeysWithIdentifiers:(id)a0 sharedByOwnerKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)signAppData:(id)a0 appBundleIdentifier:(id)a1 nonce:(id)a2 auth:(id)a3 keyIdentifier:(id)a4 callback:(id /* block */)a5;
- (void)cancelInvitationsWithIdentifiers:(id)a0 sentByOwnerKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)countImmobilizerTokensForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)listSharingInvitationsForKeyIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)removeSharedKeysWithIdentifiers:(id)a0 ownerKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)listReceivedSharingInvitationsWithCallback:(id /* block */)a0;
- (void)deleteKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)setTrackingReceipt:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 forKeyWithIdentifier:(id)a4;
- (void)didStart:(BOOL)a0;
- (id)setTrackingReceipt:(id)a0 forKeyWithIdentifier:(id)a1;
- (void)endPointPrivacyDecryption:(id)a0 encryptedData:(id)a1 publicKey:(id)a2 callback:(id /* block */)a3;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)setImmobilizerTokens:(id)a0 publicKey:(id)a1 forKeyWithIdentifier:(id)a2 callback:(id /* block */)a3;
- (void)cancelAllFriendInvitationsWithCompletionHandler:(id /* block */)a0;
- (void)removeSharingInvitationWithId:(id)a0 completionHandler:(id /* block */)a1;
- (void)localDeleteKey:(id)a0 completionHandler:(id /* block */)a1;

@end
