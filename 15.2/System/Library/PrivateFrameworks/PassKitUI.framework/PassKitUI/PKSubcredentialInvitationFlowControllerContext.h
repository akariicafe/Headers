@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>

@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *localDeviceInvitation;
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation;
@property (nonatomic) BOOL acceptLocalDeviceInvitation;
@property (nonatomic) BOOL acceptRemoteDeviceInvitation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInvitation:(id)a0 localDeviceWebService:(id)a1 remoteDeviceWebService:(id)a2;

@end
