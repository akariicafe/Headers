@class WFCachedDonations, NSMutableDictionary, NSArray, NSSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WFActionDonationRecommender : NSObject <WFApplicationStateObserver>

@property (class, readonly, nonatomic) WFActionDonationRecommender *sharedRecommender;

@property (retain, nonatomic) NSObject<OS_dispatch_group> *activeFetchGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) WFCachedDonations *cachedDonationsForAllApps;
@property (retain, nonatomic) NSMutableDictionary *cachedDonationsPerApp;
@property (retain, nonatomic) WFCachedDonations *cachedActionPredictionsForAllApps;
@property (retain, nonatomic) NSMutableDictionary *cachedActionPredictionsPerApp;
@property (readonly, nonatomic) NSArray *defaultRecommendations;
@property (readonly, nonatomic) NSSet *excludedAppBundleIdentifiers;

+ (id)getDonationsFromActionResponse:(id)a0;
+ (id)disabledSpotlightApps;
+ (id)donationsByRemovingDuplicatesFromDonations:(id)a0 excludingAppIdentifiers:(id)a1 includingSingleDonationPerApp:(BOOL)a2;
+ (id)filterDonationsForTitleLength:(id)a0;
+ (id)filteredActionDonations:(id)a0 byApplicationAppIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchDonationsWithLimit:(unsigned long long)a0 applicationBundleIdentifier:(id)a1 includeSuggestedForAllApps:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)cacheActionPredictionDonations:(id)a0 forApplicationBundleIdentifier:(id)a1 ballpark:(unsigned long long)a2;
- (void)cacheRecentDonations:(id)a0 forApplicationBundleIdentifier:(id)a1 ballpark:(unsigned long long)a2;
- (void)fetchDonationsWithLimit:(unsigned long long)a0 applicationBundleIdentifier:(id)a1 includeSuggestedForAllApps:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)fetchRecommendedDonationsForAppPredictionsWithCompletionHandler:(id /* block */)a0;

@end
