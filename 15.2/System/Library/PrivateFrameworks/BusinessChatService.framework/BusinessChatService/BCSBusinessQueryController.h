@class NSString, NSObject;
@protocol BCSIconControllerProtocol, BCSConfigCaching, BCSChatSuggestControllerProtocol, BCSHousekeeping, BCSItemResolving, BCSCacheClearing, BCSConfigResolving, OS_dispatch_queue, BCSShardResolving, BCSConfigCacheSkipping, BCSPrefetchTrigger, BCSURLPatternControllerProtocol, BCSShardCacheQueryable, BCSMetricFactoryProtocol, BCSShardCacheSkipping, BCSEntitlementVerifying, BCSIdentityServiceProtocol, BCSQueryChopperProtocol;

@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol> {
    id<BCSIdentityServiceProtocol> _identityService;
    id<BCSIconControllerProtocol> _iconController;
    id<BCSCacheClearing> _cacheClearer;
    id<BCSChatSuggestControllerProtocol> _chatSuggestController;
    id<BCSItemResolving> _chatSuggestItemResolver;
    id<BCSConfigResolving> _chatSuggestConfigResolver;
    id<BCSShardResolving> _chatSuggestShardResolver;
    id<BCSItemResolving> _linkItemResolver;
    id<BCSConfigResolving> _linkConfigResolver;
    id<BCSShardResolving> _linkShardResolver;
    id<BCSPrefetchTrigger> _chatSuggestMegashardPrefetchTrigger;
    id<BCSPrefetchTrigger> _businessLinksMegashardPrefetchTrigger;
    id<BCSPrefetchTrigger> _prefetchConfigTrigger;
    id<BCSEntitlementVerifying> _entitlementVerifier;
    id<BCSQueryChopperProtocol> _queryChopper;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id<BCSMetricFactoryProtocol> _metricFactory;
    id<BCSShardCacheQueryable> _shardCache;
    id<BCSConfigCaching> _configCache;
    id<BCSConfigCacheSkipping> _configCacheSkip;
    id<BCSShardCacheSkipping> _shardCacheSkip;
    id<BCSURLPatternControllerProtocol> _patternController;
    id<BCSHousekeeping> _housekeeper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prefetchConfigsWithCompletion:(id /* block */)a0;
- (void)fetchLinkItemModelWithURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0 forClientBundleID:(id)a1;
- (void)_deleteInMemoryCache;
- (void).cxx_destruct;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (id)initWithChatSuggestMegashardPrefetchTrigger:(id)a0 businessLinksMegashardPrefetchTrigger:(id)a1 prefetchConfigTrigger:(id)a2 entitlementVerifier:(id)a3 identityService:(id)a4 chatSuggestController:(id)a5 iconController:(id)a6 cacheClearer:(id)a7 shardCache:(id)a8 configCache:(id)a9 configCacheSkip:(id)a10 shardCacheSkip:(id)a11 chatSuggestConfigResolver:(id)a12 linkConfigResolver:(id)a13 chatSuggestShardResolver:(id)a14 linkShardResolver:(id)a15 chatSuggestItemResolver:(id)a16 linkItemResolver:(id)a17 queryChopper:(id)a18 patternController:(id)a19 metricFactory:(id)a20 housekeeper:(id)a21;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIsBusinessPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)fetchLinkItemModelWithHash:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)prefetchBloomFilterAndConfigsWithCompletion:(id /* block */)a0;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)_itemWithIdentifier:(id)a0 forClientBundleID:(id)a1 skipFilterCheck:(BOOL)a2 completion:(id /* block */)a3;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithConfigPrefetcher:(id)a0 chatSuggestMegashardPrefetcher:(id)a1 businesLinksMegashardPrefetcher:(id)a2 shardCache:(id)a3 cacheManager:(id)a4 chatSuggestRemoteFetcher:(id)a5 businessLinkRemoteFetcher:(id)a6 userDefaults:(id)a7 metricFactory:(id)a8;

@end
