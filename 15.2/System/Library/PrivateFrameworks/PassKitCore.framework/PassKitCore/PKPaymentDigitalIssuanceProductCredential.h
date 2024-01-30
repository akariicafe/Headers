@class PKServiceProviderPurchase, NSString, PKPaymentSetupProduct, NSArray, PKCurrencyAmount;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (readonly, copy, nonatomic) NSArray *metadata;

- (void).cxx_destruct;
- (void)setRequirementsResponse:(id)a0;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 balance:(id)a2;

@end
