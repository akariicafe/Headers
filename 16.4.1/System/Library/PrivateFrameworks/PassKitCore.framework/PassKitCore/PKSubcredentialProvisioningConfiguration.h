@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) long long configurationType;

- (id)transitionTable;
- (id)acceptInvitationConfiguration;
- (id)initWithConfigurationType:(long long)a0;
- (id)localDeviceConfiguration;
- (id)ownerConfiguration;
- (id)remoteDeviceConfiguration;
- (id)remoteDeviceInvitation;
- (long long)startingState;

@end
