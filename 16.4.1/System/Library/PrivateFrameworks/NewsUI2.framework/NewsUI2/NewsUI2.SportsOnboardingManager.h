@interface NewsUI2.SportsOnboardingManager : NSObject <FCUserInfoObserving, FCAppleAccountObserver> {
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ subscriptionService;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ sportsSyncManager;
}

- (void)appleAccountChanged;
- (void)userInfoDidChangeSportsOnboardingState:(id)a0;
- (void)userInfoDidChangeSportsSyncState:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
