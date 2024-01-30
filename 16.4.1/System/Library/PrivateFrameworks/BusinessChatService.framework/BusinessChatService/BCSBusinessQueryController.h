@class NSString, NSObject;
@protocol BCSFetchTrigger, BCSIconControllerProtocol, BCSChatSuggestControllerProtocol, BCSConfigCaching, BCSHousekeeping, BCSItemResolving, OS_dispatch_queue, BCSConfigResolving, BCSCacheClearing, BCSShardResolving, BCSConfigCacheSkipping, BCSURLPatternControllerProtocol, BCSShardCacheQueryable, BCSMetricFactoryProtocol, BCSShardCacheSkipping, BCSEntitlementVerifying, BCSIdentityServiceProtocol, BCSQueryChopperProtocol;

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
    id<BCSFetchTrigger> _chatSuggestMegashardFetchTrigger;
    id<BCSFetchTrigger> _businessLinkMegashardFetchTrigger;
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

- (void).cxx_destruct;
- (void)fetchLinkItemModelWithURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)_deleteInMemoryCache;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)_itemWithIdentifier:(id)a0 forClientBundleID:(id)a1 skipFilterCheck:(BOOL)a2 completion:(id /* block */)a3;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIsBusinessPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLinkItemModelWithHash:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithChatSuggestMegashardFetchTrigger:(id)a0 businessLinkMegashardFetchTrigger:(id)a1 entitlementVerifier:(id)a2 identityService:(id)a3 chatSuggestController:(id)a4 iconController:(id)a5 cacheClearer:(id)a6 shardCache:(id)a7 configCache:(id)a8 configCacheSkip:(id)a9 shardCacheSkip:(id)a10 chatSuggestConfigResolver:(id)a11 linkConfigResolver:(id)a12 chatSuggestShardResolver:(id)a13 linkShardResolver:(id)a14 chatSuggestItemResolver:(id)a15 linkItemResolver:(id)a16 queryChopper:(id)a17 patternController:(id)a18 metricFactory:(id)a19 housekeeper:(id)a20;
- (id)initWithChatSuggestMegashardFetcher:(id)a0 businessLinkMegashardFetcher:(id)a1 shardCache:(id)a2 cacheManager:(id)a3 chatSuggestRemoteFetcher:(id)a4 businessLinkRemoteFetcher:(id)a5 userDefaults:(id)a6 metricFactory:(id)a7;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)prefetchMegashardsWithCompletion:(id /* block */)a0;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0 forClientBundleID:(id)a1;

@end
