@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) long long configurationType;

- (id)ownerConfiguration;
- (long long)startingState;
- (id)initWithConfigurationType:(long long)a0;
- (id)transitionTable;
- (id)remoteDeviceConfiguration;
- (id)acceptInvitationConfiguration;
- (id)remoteDeviceInvitation;
- (id)localDeviceConfiguration;

@end
