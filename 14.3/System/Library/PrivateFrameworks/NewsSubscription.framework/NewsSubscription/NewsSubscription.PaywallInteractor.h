@interface NewsSubscription.PaywallInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ paywallModel;
    void /* unknown type, empty encoding */ purchaseSessionID;
    void /* unknown type, empty encoding */ webAccessAuthenticatorFactory;
    void /* unknown type, empty encoding */ webAccessAuthenticator;
    void /* unknown type, empty encoding */ webAccessConversionEventReporter;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
