@class PKAppletSubcredential, PKPaymentProvisioningController, PKAppletSubcredentialSharingInvitation, PKAddCarKeyPassConfiguration, PKEntitlementWhitelist, PKAppletSubcredentialSharingRequest;

@interface PKSubcredentialPairingFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>

@property (retain, nonatomic) PKAddCarKeyPassConfiguration *configuration;
@property (retain, nonatomic) PKEntitlementWhitelist *appEntitlementWhitelist;
@property (nonatomic) BOOL passwordManuallyEntered;
@property (retain, nonatomic) PKAppletSubcredential *credentialToShare;
@property (retain, nonatomic) PKAppletSubcredentialSharingRequest *remoteDeviceSharingRequest;
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation;
@property (nonatomic) BOOL shouldRequestInvitation;
@property (nonatomic) BOOL declineRelatedInvitations;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlowType:(long long)a0;

@end
