@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration

@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation;
@property (readonly, nonatomic) BOOL canRequestInvitation;
@property (readonly, nonatomic) BOOL declineRelatedInvitations;
@property (readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService;
@property (readonly, nonatomic) PKPaymentWebService *localDeviceWebService;

- (void).cxx_destruct;
- (long long)startingState;
- (id)transitionTable;
- (id)description;
- (id)initWithInvitation:(id)a0 canRequestInvitation:(BOOL)a1 declineRelatedInvitations:(BOOL)a2 localDeviceWebService:(id)a3 remoteDeviceWebService:(id)a4 configurationType:(long long)a5;
- (id)initWithInvitation:(id)a0 canRequestInvitation:(BOOL)a1 declineRelatedInvitations:(BOOL)a2 localDeviceWebService:(id)a3 remoteDeviceWebService:(id)a4;

@end
