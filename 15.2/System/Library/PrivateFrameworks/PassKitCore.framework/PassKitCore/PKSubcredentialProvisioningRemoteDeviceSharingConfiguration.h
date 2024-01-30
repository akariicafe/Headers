@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingSession;
@protocol PKSubcredentialProvisioningUserAuthDelegate;

@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration : PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration

@property (readonly, nonatomic) PKAppletSubcredentialSharingRequest *sharingRequest;
@property (readonly, nonatomic) PKAppletSubcredentialSharingSession *sharingSession;
@property (readonly, weak, nonatomic) id<PKSubcredentialProvisioningUserAuthDelegate> userAuthDelegate;

- (long long)startingState;
- (id)transitionTable;
- (id)initWithSharingRequest:(id)a0 sharingSession:(id)a1 localDeviceWebService:(id)a2 remoteDeviceWebService:(id)a3 userAuthDelegate:(id)a4;
- (id)description;
- (void).cxx_destruct;

@end
