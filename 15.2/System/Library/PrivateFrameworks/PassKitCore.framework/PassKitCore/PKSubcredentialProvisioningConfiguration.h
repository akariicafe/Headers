@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) long long configurationType;

- (id)localDeviceConfiguration;
- (long long)startingState;
- (id)transitionTable;
- (id)initWithConfigurationType:(long long)a0;
- (id)remoteDeviceConfiguration;
- (id)remoteDeviceInvitation;
- (id)ownerConfiguration;
- (id)acceptInvitationConfiguration;

@end
