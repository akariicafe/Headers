@interface NewsUI2.EngagementUpsellOfferManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ offerEntry;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ bundlePurchasePrewarmer;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ offerManager;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
