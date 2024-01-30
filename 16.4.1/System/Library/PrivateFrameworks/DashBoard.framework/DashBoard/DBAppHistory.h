@class NSString, NSMutableDictionary, CARObserverHashTable, CRCarPlayAppPolicyEvaluator, NSArray;
@protocol DBAppPolicyProviding;

@interface DBAppHistory : NSObject <DBAppHistoryAppDockProviding, DBWorkspaceObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *appHistory;
@property (nonatomic) BOOL nowPlayingIsVisible;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (weak, nonatomic) id<DBAppPolicyProviding> policyProvider;
@property (readonly, nonatomic) CRCarPlayAppPolicyEvaluator *policyEvaluator;
@property (readonly, nonatomic) NSArray *orderedAppHistory;
@property (retain, nonatomic) NSArray *sessionAppContextURLs;
@property (retain, nonatomic) NSArray *sessionEchoContextURLs;
@property (retain, nonatomic) NSArray *sessionFeatureKeys;
@property (retain, nonatomic) NSMutableDictionary *sessionContextOwners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)applicationCategoryForURL:(id)a0;
+ (id)availableApplicationContexts;
+ (id)contextForApplicationCategory:(unsigned long long)a0;

- (void)_commonInit;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)_appInfoForBundleIdentifier:(id)a0;
- (void)_sessionDidDisconnect;
- (BOOL)isBundleIdentifierValidForDock:(id)a0;
- (void)resetAppHistory;
- (id)_allInstalledApplicationsInCategory:(unsigned long long)a0;
- (void)_bundleIdentifierDidBecomeVisible:(id)a0 previousBundleIdentifier:(id)a1;
- (BOOL)_evaluatePolicyForBundleIdentifier:(id)a0 withBlock:(id /* block */)a1;
- (void)_evaluateUniversalLinksForURL:(id)a0 withIconProvider:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isMapsApplicationForBundleIdentifier:(id)a0;
- (BOOL)_isNowPlayingApplicationForBundleIdentifier:(id)a0;
- (void)_nowPlayingWillAppear:(id)a0;
- (void)_nowPlayingWillDisappear:(id)a0;
- (id)_orderedAppsForBundleIdentifiers:(id)a0;
- (void)_persistSessionUIContextOwnership;
- (id)_preferredBundleIdentifierInCategory:(unsigned long long)a0;
- (void)_sessionDidConnect:(id)a0 environmentConfiguration:(id)a1;
- (unsigned long long)appDockCategoryForBundleIdentifier:(id)a0;
- (unsigned long long)applicationCategoryForBundleIdentifier:(id)a0;
- (BOOL)applicationVisibleInCarPlay:(id)a0 withIconProvider:(id)a1;
- (void)applySessionAppContexts:(id)a0;
- (void)applySessionEchoContexts:(id)a0;
- (unsigned long long)currentOwnerForContext:(id)a0;
- (id)initWithPolicyEvaluator:(id)a0;
- (id)initWithPolicyProvider:(id)a0;
- (double)lastActivationTimeForApplication:(id)a0;
- (double)lastActivationTimeForBundleIdentifier:(id)a0;
- (void)nowPlayingIconTapped;
- (void)openApplicationURL:(id)a0 withIconProvider:(id)a1 activationSettings:(id)a2 completion:(id /* block */)a3;
- (id)orderedAppsMatchingCategory:(unsigned long long)a0;
- (id)orderedAppsMatchingDockCategory:(unsigned long long)a0;
- (id)orderedBundleIdentifiersMatchingDockCategory:(unsigned long long)a0;
- (id)policyForBundleIdentifier:(id)a0;
- (void)setDashboardAppOnDisconnect:(id)a0;
- (void)updateOwner:(unsigned long long)a0 forContext:(id)a1;
- (void)workspace:(id)a0 stateDidChangeFromState:(id)a1 toState:(id)a2;

@end
