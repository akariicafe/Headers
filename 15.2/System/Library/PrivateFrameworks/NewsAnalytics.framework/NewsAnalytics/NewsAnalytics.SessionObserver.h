@class NSString;

@interface NewsAnalytics.SessionObserver : NSObject <NSSNewsAnalyticsSessionManagerObserving, FCBundleSubscriptionChangeObserver, FCCoreConfigurationObserving, FCUserInfoObserving, FCNewsletterSubscriptionObserver, FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ fsidProvider;
    void /* unknown type, empty encoding */ onboardingVersion;
    void /* unknown type, empty encoding */ appExtensionCommunicator;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ sessionStartSource;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ sceneSessionIdentifier;
}

@property (nonatomic, copy) NSString *sceneSessionIdentifier;

- (void)sessionDidStartWithSessionID:(id)a0 sourceApplication:(id)a1;
- (void)sessionWillResignActive;
- (void)sessionWillEndWithEndReason:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)userInfoDidChangeAdsUserID:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5 eventInitiationLevel:(long long)a6;
- (void)configurationManagerScienceExperimentFieldsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (id)init;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)userInfoDidChangeFeldsparID:(id)a0 fromCloud:(BOOL)a1;
- (void)pushContentEnvironmentData;
- (void)familySharingStatusDidChange:(id)a0;
- (void)pushMobileData;
- (void)pushOrientationData;
- (void)offerDidChange:(id)a0;
- (void)pushUserSubscriptionContextData;
- (void)pushSessionDataWithRegionIDs:(id)a0 notificationSettings:(id)a1;

@end
