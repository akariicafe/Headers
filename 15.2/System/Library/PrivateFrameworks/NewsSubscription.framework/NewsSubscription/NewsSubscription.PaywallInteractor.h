@interface NewsSubscription.PaywallInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ webAccessAuthenticatorFactory;
    void /* unknown type, empty encoding */ webAccessAuthenticator;
    void /* unknown type, empty encoding */ webAccessConversionEventReporter;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
