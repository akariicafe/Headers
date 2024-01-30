@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *certificates;
@property (readonly, copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *nonceSignature;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
