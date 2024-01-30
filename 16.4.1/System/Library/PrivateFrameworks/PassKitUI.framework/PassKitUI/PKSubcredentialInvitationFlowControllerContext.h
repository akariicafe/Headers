@class NSError, PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>

@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *localDeviceInvitation;
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation;
@property (nonatomic) BOOL acceptLocalDeviceInvitation;
@property (retain, nonatomic) NSError *acceptLocalDeviceInvitationDisplayableError;
@property (nonatomic) BOOL acceptRemoteDeviceInvitation;
@property (retain, nonatomic) NSError *acceptRemoteDeviceInvitationDisplayableError;
@property (nonatomic) BOOL isShareActivation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithInvitation:(id)a0 localDeviceWebService:(id)a1 remoteDeviceWebService:(id)a2;

@end
