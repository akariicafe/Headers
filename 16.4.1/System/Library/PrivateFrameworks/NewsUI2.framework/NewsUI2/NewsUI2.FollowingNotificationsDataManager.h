@interface NewsUI2.FollowingNotificationsDataManager : NSObject <FCUserInfoObserving, FCNewsletterSubscriptionObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subscriptionService;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ userNotificationCenter;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ newsletterManager;
}

- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)a0;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)determineSystemNotificationSettingsStatus;

@end
