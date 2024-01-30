@class NSArray;

@interface PKPaymentServiceProviderPurchasesResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *purchases;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
