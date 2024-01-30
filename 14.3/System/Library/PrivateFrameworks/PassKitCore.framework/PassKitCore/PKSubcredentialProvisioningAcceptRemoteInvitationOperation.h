@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKSubcredentialProvisioningAcceptRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentWebService *_remoteDeviceWebService;
    PKPaymentWebService *_localDeviceWebService;
    id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
    id<PKPaymentWebServiceTargetDeviceProtocol> _localTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}

+ (BOOL)canDeviceAcceptInvitation:(id)a0;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)acceptInvitation:(id)a0 withMetadata:(id)a1;
- (void)getMatchingInvitation:(id)a0 withCompletion:(id /* block */)a1;
- (void)metadataForInvitation:(id)a0 withCompletion:(id /* block */)a1;

@end
