@interface NewsUI2.EmailSignupDetectionManager : NSObject <FCAppActivityObserving, FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ appLaunchUpsellManager;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ appStartup;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ emailSignupModelFactory;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
