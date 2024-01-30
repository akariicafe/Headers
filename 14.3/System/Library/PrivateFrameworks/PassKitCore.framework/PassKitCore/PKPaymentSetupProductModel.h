@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject {
    NSMutableDictionary *_paymentSetupProducts;
}

- (id)init;
- (void).cxx_destruct;
- (id)allSetupProducts;
- (void)setPaymentSetupProducts:(id)a0;
- (id)productsForFeatureIdentifier:(unsigned long long)a0;
- (void)setPaymentSetupProducts:(id)a0 forType:(unsigned long long)a1;
- (void)addPaymentSetupProducts:(id)a0;
- (id)productForProductIdentifier:(id)a0;
- (id)setupProductsOfType:(unsigned long long)a0;

@end
