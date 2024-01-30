@class NSString;

@interface NewsAnalytics.SessionObserver : NSObject <NSSNewsAnalyticsSessionManagerObserving, FCBundleSubscriptionChangeObserver, FCCoreConfigurationObserving, FCUserInfoObserving, FCNewsletterSubscriptionObserver, FCSubscriptionObserving, FCShortcutListObserving> {
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ fsidProvider;
    void /* unknown type, empty encoding */ onboardingVersion;
    void /* unknown type, empty encoding */ appExtensionCommunicator;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ sessionStartSource;
    void /* unknown type, empty encoding */ sessionURLManager;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ sceneSessionIdentifier;
}

@property (nonatomic, copy) NSString *sceneSessionIdentifier;

- (void)sessionDidStartWithSessionID:(id)a0 sourceApplication:(id)a1 url:(id)a2;
- (void)sessionWillEndWithEndReason:(id)a0;
- (void)sessionWillResignActive;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)dealloc;
- (void)userInfoDidChangeFeldsparID:(id)a0 fromCloud:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)configurationManagerScienceExperimentFieldsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)shortcutList:(id)a0 didAddShortcuts:(id)a1 changedShortcuts:(id)a2 removedShortcuts:(id)a3;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)a0;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (void)userInfoDidChangeAdsUserID:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)offerDidChange:(id)a0;
- (void)pushUserSubscriptionContextData;
- (void)familySharingStatusDidChange:(id)a0;
- (void)pushContentEnvironmentData;
- (void)pushOrientationData;
- (void)pushSessionDataWithRegionIDs:(id)a0 notificationSettings:(id)a1 isSportsOnboarded:(BOOL)a2;

@end
