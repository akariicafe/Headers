@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest

@property (nonatomic) unsigned long long nonceType;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithNonceType:(unsigned long long)a0;

@end
