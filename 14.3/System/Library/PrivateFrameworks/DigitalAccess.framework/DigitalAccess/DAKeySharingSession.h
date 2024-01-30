@class NSString;

@interface DAKeySharingSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyBindingAttestationUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnd:(id)a0;
- (void)sendSharingInvitationForKeyIdentifier:(id)a0 toIdsIdentifier:(id)a1 auth:(id)a2 config:(id)a3 completionHandler:(id /* block */)a4;
- (void)sendSilentSharingInvitationWithKeyIdentifier:(id)a0 config:(id)a1 groupIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (id)cancelSharingInvitation:(id)a0;
- (void)acceptSharingInvitationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)setBindingAttestation:(id)a0 forKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)requestInviteWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)didStart:(BOOL)a0;
- (void)authorizeSharingInvitationIdentifier:(id)a0 auth:(id)a1 completionHandler:(id /* block */)a2;
- (void)startKeyExchangeWithInvitationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendSharingInvitationForKeyIdentifier:(id)a0 permissions:(id)a1 toIdsIdentifier:(id)a2 keyDisplayName:(id)a3 metaData:(id)a4 auth:(id)a5 completionHandler:(id /* block */)a6;

@end
