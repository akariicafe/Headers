@class NSString;

@interface DAKeySharingSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyBindingAttestationUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cancelSharingInvitation:(id)a0;
- (void)sendSharingInvitationForKeyIdentifier:(id)a0 toIdsIdentifier:(id)a1 auth:(id)a2 config:(id)a3 completionHandler:(id /* block */)a4;
- (void)setBindingAttestation:(id)a0 forKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)sendSilentSharingInvitationWithKeyIdentifier:(id)a0 config:(id)a1 groupIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)acceptSharingInvitationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)requestInviteWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)didEnd:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didStart:(BOOL)a0;
- (void)authorizeSharingInvitationIdentifier:(id)a0 auth:(id)a1 completionHandler:(id /* block */)a2;

@end
