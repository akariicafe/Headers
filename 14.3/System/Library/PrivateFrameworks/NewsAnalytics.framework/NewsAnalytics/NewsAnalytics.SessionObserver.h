@class NSString;

@interface NewsAnalytics.SessionObserver : NSObject <NSSNewsAnalyticsSessionManagerObserving, FCBundleSubscriptionChangeObserver, FCUserInfoObserving, FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ sceneSessionIdentifier;
}

@property (nonatomic, copy) NSString *sceneSessionIdentifier;

- (void)sessionDidStartWithSessionID:(id)a0 sourceApplication:(id)a1;
- (void)sessionWillResignActive;
- (void)sessionWillEndWithEndReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5 eventInitiationLevel:(long long)a6;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)userInfoDidChangeFeldsparID:(id)a0 fromCloud:(BOOL)a1;
- (void)pushContentEnvironmentData;
- (void)pushOrientationData;
- (void)pushMobileData;
- (void)offerDidChange:(id)a0;
- (void)pushUserSubscriptionContextData;
- (void)pushSessionDataWithRegionIDs:(id)a0;

@end
