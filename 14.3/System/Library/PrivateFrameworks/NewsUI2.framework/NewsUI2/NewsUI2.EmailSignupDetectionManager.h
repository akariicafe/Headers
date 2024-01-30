@interface NewsUI2.EmailSignupDetectionManager : NSObject <FCAppActivityObserving> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ appLaunchUpsellManager;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ appStartup;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
}

- (void)activityObservingApplicationWindowDidBecomeForeground;
- (id)init;
- (void).cxx_destruct;

@end
