@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKPaymentPushProvisioningProvideEncryptedPushProvisioningTargetRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget;
@property (copy, nonatomic) NSString *sharingInstanceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)requestBody;
- (id)initWithEncryptedPushProvisioningTarget:(id)a0 sharingInstanceIdentifier:(id)a1;

@end
