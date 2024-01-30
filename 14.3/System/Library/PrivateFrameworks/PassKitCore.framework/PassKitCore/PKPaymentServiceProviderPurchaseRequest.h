@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *purchaseIdentifier;

- (void).cxx_destruct;
- (id)initWithPurchaseIdentifier:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
