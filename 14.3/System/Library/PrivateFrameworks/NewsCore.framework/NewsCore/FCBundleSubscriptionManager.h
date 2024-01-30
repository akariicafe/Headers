@class FCBundleSubscriptionLookUpEntryManager, NFMutexLock, FCBundleSubscription, NSHashTable, NSString, FCKeyValueStore, FCPurchaseLookupRecordSource;
@protocol FCBundleEntitlementsProviderType, FCBundleChannelProviderType, FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType>

@property (readonly, nonatomic) id<FCBundleEntitlementsProviderType> bundleEntitlementsProvider;
@property (readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (retain, nonatomic) FCBundleSubscription *cachedSubscription;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) FCBundleSubscriptionLookUpEntryManager *bundleSubscriptionLookupEntryManager;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (retain, nonatomic) id<FCBundleChannelProviderType> bundleChannelProvider;
@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (nonatomic) BOOL hasRunEntitlementOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;

- (void)activityObservingApplicationDidEnterBackground;
- (void)notifyObserversForExpiredStateWithSubscription:(id)a0;
- (void)updateCachedSubscriptionWithSubscription:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)removeObserver:(id)a0;
- (void)updateHasRunEntitlementOnce:(BOOL)a0;
- (void)addObserver:(id)a0;
- (void)silentExpireBundleSubscription;
- (void)clearBundleSubscription;
- (void)bundleChannelProvider:(id)a0 bundleChannelIDsDidChangeWithChannelIDs:(id)a1 version:(id)a2;
- (void)setupCachedSubscription;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)notifyObserversForChangeStateWithNewSubscription:(id)a0 previousBundleSubscription:(id)a1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)expireBundleSubscription;
- (id)initWithPrivateDataDirectory:(id)a0 configurationManager:(id)a1 purchaseLookupRecordSource:(id)a2 appActivityMonitor:(id)a3 entitlementsProvider:(id)a4;
- (id)bundleSubscriptionLookupEntry;
- (void)notifyObserversForSubscribedStateWithSubscription:(id)a0;
- (void)setEntitlementsOverrideProvider:(id)a0;

@end
