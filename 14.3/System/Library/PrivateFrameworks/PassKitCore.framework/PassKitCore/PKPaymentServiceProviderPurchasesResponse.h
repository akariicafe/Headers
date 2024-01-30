@class NSArray;

@interface PKPaymentServiceProviderPurchasesResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *purchases;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
