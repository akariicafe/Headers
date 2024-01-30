@class NSString, NSObject;
@protocol BCSIconControllerProtocol, BCSConfigCaching, BCSChatSuggestControllerProtocol, BCSItemResolving, BCSCacheClearing, BCSConfigResolving, OS_dispatch_queue, BCSShardResolving, BCSConfigCacheSkipping, BCSPrefetchTrigger, BCSShardCacheQueryable, BCSMetricFactoryProtocol, BCSShardCacheSkipping, BCSEntitlementVerifying, BCSIdentityServiceProtocol, BCSQueryChopperProtocol;

@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol>

@property (retain, nonatomic) id<BCSIdentityServiceProtocol> identityService;
@property (retain, nonatomic) id<BCSIconControllerProtocol> iconController;
@property (retain, nonatomic) id<BCSCacheClearing> cacheClearer;
@property (retain, nonatomic) id<BCSChatSuggestControllerProtocol> chatSuggestController;
@property (retain, nonatomic) id<BCSItemResolving> chatSuggestItemResolver;
@property (retain, nonatomic) id<BCSConfigResolving> chatSuggestConfigResolver;
@property (retain, nonatomic) id<BCSShardResolving> chatSuggestShardResolver;
@property (retain, nonatomic) id<BCSItemResolving> linkItemResolver;
@property (retain, nonatomic) id<BCSConfigResolving> linkConfigResolver;
@property (retain, nonatomic) id<BCSShardResolving> linkShardResolver;
@property (retain, nonatomic) id<BCSPrefetchTrigger> prefetchBloomFilterAndConfigTrigger;
@property (retain, nonatomic) id<BCSPrefetchTrigger> prefetchConfigTrigger;
@property (retain, nonatomic) id<BCSEntitlementVerifying> entitlementVerifier;
@property (retain, nonatomic) id<BCSQueryChopperProtocol> queryChopper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) id<BCSShardCacheQueryable> shardCache;
@property (retain, nonatomic) id<BCSConfigCaching> configCache;
@property (retain, nonatomic) id<BCSConfigCacheSkipping> configCacheSkip;
@property (retain, nonatomic) id<BCSShardCacheSkipping> shardCacheSkip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0 forClientBundleID:(id)a1;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchBusinessItemWithBizID:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIsBusinessPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLinkItemModelWithURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)fetchLinkItemModelWithHash:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)prefetchBloomFilterAndConfigsWithCompletion:(id /* block */)a0;
- (void)prefetchConfigsWithCompletion:(id /* block */)a0;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)_deleteInMemoryCache;
- (id)initWithPrefetchBloomFilterAndConfigTrigger:(id)a0 prefetchConfigTrigger:(id)a1 entitlementVerifier:(id)a2 identityService:(id)a3 chatSuggestController:(id)a4 iconController:(id)a5 cacheClearer:(id)a6 shardCache:(id)a7 configCache:(id)a8 configCacheSkip:(id)a9 shardCacheSkip:(id)a10 chatSuggestConfigResolver:(id)a11 linkConfigResolver:(id)a12 chatSuggestShardResolver:(id)a13 linkShardResolver:(id)a14 chatSuggestItemResolver:(id)a15 linkItemResolver:(id)a16 queryChopper:(id)a17 metricFactory:(id)a18;
- (void)_itemWithIdentifier:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isBloomFilterCachedForType:(long long)a0;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)_itemResolverForType:(long long)a0;
- (void)_itemWithIdentifier:(id)a0 config:(id)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)_configForItemWithIdentifier:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)_shardForItemWithIdentifier:(id)a0 configItem:(id)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (id)_configResolverForType:(long long)a0;
- (long long)_shardStartIndexForItemIdentifier:(id)a0 shardCount:(long long)a1;
- (id)_shardResolverForType:(long long)a0;
- (id)initWithBloomFilterAndConfigPrefetcher:(id)a0 configPrefetcher:(id)a1 shardCache:(id)a2 cacheManager:(id)a3 chatSuggestRemoteFetcher:(id)a4 businessLinkRemoteFetcher:(id)a5 userDefaults:(id)a6 metricFactory:(id)a7;

@end
