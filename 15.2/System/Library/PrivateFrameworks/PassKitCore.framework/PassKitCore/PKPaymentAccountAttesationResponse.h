@class NSData;

@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSData *attestation;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
