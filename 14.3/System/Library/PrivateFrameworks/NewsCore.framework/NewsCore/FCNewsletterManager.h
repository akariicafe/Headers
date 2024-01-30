@class FCCommandQueue, FCNewsletterEndpointConnection, NSHashTable, NSDate, NFPromise, NSString;
@protocol FCNewsAppConfigurationManager, FCAppleAccount;

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver>

@property (nonatomic) long long subscription;
@property (nonatomic) long long includeOptions;
@property (readonly, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue;
@property (readonly, nonatomic) id<FCAppleAccount> appleAccount;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfig;
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

- (void)subscribe;
- (void).cxx_destruct;
- (void)activityObservingApplicationDidBecomeActive;
- (void)removeObserver:(id)a0;
- (void)notifyObservers;
- (id)updateSubscription;
- (void)addObserver:(id)a0;
- (void)submitPersonalizationVector:(id)a0;
- (id)forceUpdateSubscription;
- (BOOL)canSubscribeToNewsletter:(long long)a0;
- (void)subscribeTo:(long long)a0 includeOptions:(long long)a1;
- (void)appleAccountChanged;
- (double)cacheTimeout;
- (long long)subscriptionStatusForNewsletter:(long long)a0;
- (void)updateCacheWithNewsletterString:(id)a0 includeArray:(id)a1;
- (BOOL)shouldSubmitPersonalizationVector;
- (void)unsubscribe;
- (void)notifyObserversWithPreviousSubscription:(long long)a0;
- (void)deletePersonalizationVector;
- (id)initWithEndpointConnection:(id)a0 endpointCommandQueue:(id)a1 appleAccount:(id)a2 appConfig:(id)a3;
- (void)subscribeTo:(long long)a0;

@end
