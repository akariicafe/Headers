@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKPaymentPushProvisioningSharingStatusRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *sharingIdentifier;
@property (copy, nonatomic) NSString *cardConfigurationIdentifer;
@property (retain, nonatomic) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget;

- (id)requestBody;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithEncryptedProvisioningTarget:(id)a0;
- (id)initWithProvisioningSharingIdentifier:(id)a0 cardCardConfigurationIdentifer:(id)a1;

@end
