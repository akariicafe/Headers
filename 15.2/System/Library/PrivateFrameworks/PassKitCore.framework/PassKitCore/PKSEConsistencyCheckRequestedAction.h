@class PKSECredentialAddress, PKSEConsistencyCheckDeviceCredential;

@interface PKSEConsistencyCheckRequestedAction : NSObject

@property (readonly, nonatomic) long long actions;
@property (readonly, nonatomic) PKSEConsistencyCheckDeviceCredential *deviceCredential;
@property (readonly, nonatomic) PKSECredentialAddress *address;

- (id)description;
- (void).cxx_destruct;
- (id)initWithActions:(long long)a0 deviceCredential:(id)a1 address:(id)a2;
- (id)init;

@end
