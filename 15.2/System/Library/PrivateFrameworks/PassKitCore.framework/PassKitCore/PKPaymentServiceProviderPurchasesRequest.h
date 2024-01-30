@class NSString;

@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *purchaseState;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *countryCode;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithPurchaseState:(id)a0 serviceProviderIdentifier:(id)a1 productIdentifier:(id)a2 actionIdentifier:(id)a3 serviceProviderCountryCode:(id)a4;

@end
