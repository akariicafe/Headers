@class PKServiceProviderPurchase, NSString, PKPaymentSetupProduct, PKDigitalIssuanceServiceProviderItem, PKCurrencyAmount, PKDigitalIssuanceServiceProviderProduct, NSArray;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic) PKCurrencyAmount *price;
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderProduct *serviceProviderProduct;
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderItem *serviceProviderItem;
@property (retain, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSArray *metadata;

- (void).cxx_destruct;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 balance:(id)a2;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 balance:(id)a2 serviceProviderProduct:(id)a3 item:(id)a4 currency:(id)a5;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 serviceProviderProduct:(id)a2 item:(id)a3 currency:(id)a4;
- (void)setRequirementsResponse:(id)a0;
- (id)setupProductIdentifier;

@end
