@class NSArray;

@interface PKPaymentRemoteCredentialsResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *credentials;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
