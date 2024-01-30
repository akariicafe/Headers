@class PKCredentialRegistrationMetadata, PKPaymentWebService;

@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration

@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (readonly, nonatomic) PKCredentialRegistrationMetadata *registrationMetadata;

- (void).cxx_destruct;
- (id)initWithWebService:(id)a0 registrationMetadata:(id)a1 configurationType:(long long)a2;

@end
