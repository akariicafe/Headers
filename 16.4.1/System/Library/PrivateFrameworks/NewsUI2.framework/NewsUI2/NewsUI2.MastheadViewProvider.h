@interface NewsUI2.MastheadViewProvider : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ mastheadView;
    void /* unknown type, empty encoding */ titleViewStyler;
    void /* unknown type, empty encoding */ layoutAttributesFactory;
    void /* unknown type, empty encoding */ margins;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ animationManager;
    void /* unknown type, empty encoding */ engagementBanner;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ lastLayoutOptions;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
