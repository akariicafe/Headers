@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *provisioningMethod;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithProductIdentifier:(id)a0 provisioningMethod:(id)a1;

@end
