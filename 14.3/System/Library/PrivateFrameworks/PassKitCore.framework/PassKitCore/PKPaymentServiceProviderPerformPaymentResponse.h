@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformPaymentResponse : PKPaymentWebServiceResponse

@property (readonly, retain, nonatomic) PKServiceProviderPurchase *purchase;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
