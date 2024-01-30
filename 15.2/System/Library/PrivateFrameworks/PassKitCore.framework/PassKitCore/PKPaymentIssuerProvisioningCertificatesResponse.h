@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *certificates;
@property (readonly, copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *nonceSignature;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
