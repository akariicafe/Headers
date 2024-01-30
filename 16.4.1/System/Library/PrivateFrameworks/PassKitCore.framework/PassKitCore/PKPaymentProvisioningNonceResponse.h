@class NSString;

@interface PKPaymentProvisioningNonceResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *nonce;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
