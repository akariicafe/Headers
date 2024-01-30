@class PKAppletSubcredential, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationReceipt, PKAppletSubcredentialSharingRequest, PKPaymentWebService;

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKAppletSubcredentialSharingInvitation *_invitation;
    PKAppletSubcredential *_credential;
    PKPaymentWebService *_localDeviceWebService;
    PKPaymentWebService *_remoteDeviceWebService;
    PKAppletSubcredentialSharingInvitationReceipt *_invitationReceipt;
    BOOL _hasFinished;
}

- (void)sendInvitation;
- (void).cxx_destruct;
- (void)sendInvitationWithAuth:(id)a0 completion:(id /* block */)a1;
- (void)canAcceptInvitationWithCompletion:(id /* block */)a0;
- (void)initializeAccountAttestationIfNecessaryWithCompletion:(id /* block */)a0;
- (id)userAuthDelegate;
- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
