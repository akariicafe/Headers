@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *provisioningMethod;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithProductIdentifier:(id)a0 provisioningMethod:(id)a1;

@end
