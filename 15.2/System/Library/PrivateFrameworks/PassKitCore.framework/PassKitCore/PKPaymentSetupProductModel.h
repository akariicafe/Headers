@class NSString, NSMutableDictionary, NSMutableArray;

@interface PKPaymentSetupProductModel : NSObject {
    NSMutableDictionary *_paymentSetupProducts;
    NSMutableArray *_allSections;
}

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

- (id)description;
- (id)productsForFeatureIdentifier:(unsigned long long)a0;
- (void)updatePaymentSetupProducts:(id)a0;
- (id)setupProductsOfType:(unsigned long long)a0;
- (void)removePaymentSetupProducts:(id)a0;
- (id)allSetupProducts;
- (void).cxx_destruct;
- (void)updateWithPaymentSetupProductsResponse:(id)a0 productsFilter:(id /* block */)a1 sectionsFilter:(id /* block */)a2;
- (id)init;
- (id)productForProductIdentifier:(id)a0;
- (void)_updatePaymentSetupProduct:(id)a0 displayName:(id)a1 localizedDescription:(id)a2 partnerDictionary:(id)a3 productIdentifier:(id)a4 paymentOptions:(id)a5 termsURL:(id)a6 provisioningMethods:(id)a7 readerModeMetadata:(id)a8 requiredFields:(id)a9 imageAssets:(id)a10 minimumOSVersion:(id)a11 region:(id)a12 hsa2Requirement:(id)a13 suppressPendingPurchases:(id)a14 supportedTransitNetworkIdentifiers:(id)a15 onboardingItems:(id)a16 actionBaseURL:(id)a17 productState:(id)a18 minimumProductAge:(id)a19 maximumProductAge:(id)a20 minimumTargetUserSupportedAge:(id)a21 associatedStoreIdentifiers:(id)a22 appLaunchURL:(id)a23 regionIdentifier:(id)a24 type:(id)a25 localizedNotificationTitle:(id)a26 localizedNotificationMessage:(id)a27 clientInfo:(id)a28 searchTerms:(id)a29;
- (id)allSections;
- (void)setAllSections:(id)a0;
- (id)_paymentSetupProductsWithPartners:(id)a0 products:(id)a1 existingPaymentSetupProducts:(id)a2;
- (void)setPaymentSetupProducts:(id)a0;
- (id)productsForProductIdentifiers:(id)a0;

@end
