@class PKServiceProviderPurchase, NSString, PKPaymentSetupProduct, NSArray;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property (readonly, copy, nonatomic) NSArray *metadata;
@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

- (void).cxx_destruct;
- (void)setRequirementsResponse:(id)a0;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1;

@end
