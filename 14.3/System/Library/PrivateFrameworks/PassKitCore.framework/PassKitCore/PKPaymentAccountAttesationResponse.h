@class NSData;

@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSData *attestation;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
