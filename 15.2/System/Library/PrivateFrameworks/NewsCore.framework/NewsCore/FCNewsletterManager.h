@class NSString, FCCommandQueue, FCNewsletterEndpointConnection, NSHashTable, NSDate, NFPromise, FCCKPrivateDatabase;
@protocol FCBundleSubscriptionManagerType, FCNewsAppConfigurationManager, FCAppleAccount;

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver>

@property (nonatomic) long long subscription;
@property (nonatomic) long long includeOptions;
@property (readonly, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue;
@property (readonly, nonatomic) id<FCAppleAccount> appleAccount;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfig;
@property (readonly, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (readonly, nonatomic) FCCKPrivateDatabase *database;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *cacheExpiration;
@property (retain, nonatomic) NFPromise *updateSubscriptionPromise;
@property (retain, nonatomic) NSString *cachedVector;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long activeNewsletter;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL canSubscribe;
@property (readonly, nonatomic) BOOL canUnsubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeTo:(long long)a0;
- (void)updateCacheWithNewsletterString:(id)a0 includeArray:(id)a1;
- (long long)issueOptinStatus;
- (BOOL)isOptedIntoIssues;
- (void)notifyObservers;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)forceUpdateSubscription;
- (double)cacheTimeout;
- (void)saveToCloudKitSubscribedChannels:(id)a0;
- (BOOL)isEligibleForIssues;
- (BOOL)isSignedIntoEmailAccount;
- (long long)subscriptionStatusForNewsletter:(long long)a0;
- (void)resetCaches;
- (void).cxx_destruct;
- (void)unsubscribe;
- (void)subscribe;
- (BOOL)canOptIntoIssues;
- (BOOL)canSubscribeToNewsletter:(long long)a0;
- (void)appleAccountChanged;
- (id)updateSubscription;
- (void)subscribeTo:(long long)a0 includeOptions:(long long)a1;
- (id)initWithEndpointConnection:(id)a0 endpointCommandQueue:(id)a1 appleAccount:(id)a2 appConfig:(id)a3 bundleSubscriptionManager:(id)a4 database:(id)a5;
- (void)submitPersonalizationVector:(id)a0 subscribedBundleChannelIDs:(id)a1;
- (BOOL)shouldSubmitPersonalizationVector;
- (void)optOutOfIssues;
- (void)notifyObserversWithPreviousSubscription:(long long)a0;
- (void)deletePersonalizationVector;
- (void)activityObservingApplicationDidBecomeActive;

@end
