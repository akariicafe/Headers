@interface StocksUI.AppReviewRequestManager : NSObject <FCAppleAccountObserver> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ _started;
    void /* unknown type, empty encoding */ _didEngageWithArticle;
    void /* unknown type, empty encoding */ __userIsAuthenticatedToAppStore;
    void /* unknown type, empty encoding */ _appReviewRequestLastSeenDate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appReviewPromptConfig;
}

- (void)appleAccountChanged;
- (id)init;
- (void).cxx_destruct;

@end
