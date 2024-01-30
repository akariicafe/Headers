@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentWebService *_remoteDeviceWebService;
    id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}

+ (BOOL)canRequestInvitation:(id)a0;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
