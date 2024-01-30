@class NSArray;

@interface PKPaymentRemoteCredentialsResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *credentials;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
