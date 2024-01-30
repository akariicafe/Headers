@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse

@property (readonly, retain, nonatomic) PKServiceProviderPurchase *updatedPurchase;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
