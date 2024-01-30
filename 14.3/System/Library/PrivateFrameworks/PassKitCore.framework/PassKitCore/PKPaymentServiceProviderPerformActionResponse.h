@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse

@property (readonly, retain, nonatomic) PKServiceProviderPurchase *updatedPurchase;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
