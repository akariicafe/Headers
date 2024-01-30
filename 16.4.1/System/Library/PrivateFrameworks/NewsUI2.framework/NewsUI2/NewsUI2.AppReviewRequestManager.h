@interface NewsUI2.AppReviewRequestManager : NSObject <FCAppleAccountObserver> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ _started;
    void /* unknown type, empty encoding */ _userIsAuthenticatedToAppStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useAppReviewRequest;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appReviewRequestConfig;
}

- (void)appleAccountChanged;
- (id)init;
- (void).cxx_destruct;

@end
