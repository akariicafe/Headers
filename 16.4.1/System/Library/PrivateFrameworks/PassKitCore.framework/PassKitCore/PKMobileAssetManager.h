@class NSString, PKDynamicAssetIndex, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject <PDScheduledActivityClient> {
    NSObject<OS_dispatch_queue> *_queue;
    PKDynamicAssetIndex *_dynamicAssetsIndex;
    NSBundle *_dynamicStringsBundle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)cachedDynamicStringWithIdentifier:(id)a0;
- (id)sortDescriptorsForLatestContentVersion;
- (void)prefetchDynamicAssets:(id /* block */)a0;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadAssetCatalog:(id /* block */)a0;
- (void)dynamicAssetWithIdentifier:(id)a0 mappedIdentifierPrefix:(id)a1 parameters:(id)a2 timeout:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)performScheduledActivityWithIdentifier:(id)a0 activityCriteria:(id)a1;
- (void)_retrieveAssetWithQuery:(id)a0 maxCompatibleVersion:(unsigned long long)a1 userInitiated:(BOOL)a2 sortDescriptors:(id)a3 timeout:(unsigned long long)a4 catalogExpirationDays:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)dynamicAssetWithIdentifier:(id)a0 parameters:(id)a1 timeout:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)sortDescriptorsForMarkets;
- (void)schedulePrefetchDynamicAssetsWithInterval:(double)a0 queue:(id)a1;
- (void)fetchRPIdentifierMappingUserInitiated:(BOOL)a0 localOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_downloadAsset:(id)a0 userInitiated:(BOOL)a1 timeout:(long long)a2 completion:(id /* block */)a3;
- (id)_queryForCityCodeStationProvider:(id)a0;
- (void)_downloadAssetCatalogIfExpired:(long long)a0 completion:(id /* block */)a1;
- (id)cachedDynamicAssetsIndex;
- (id)_queryForMarketNotificationIdentifier:(id)a0;
- (id)_cachedAssetWithQuery:(id)a0;
- (id)_downloadOptionsWithUserInitiation:(BOOL)a0 timeout:(long long)a1;
- (void)dynamicAssetsIndex:(id /* block */)a0;
- (id)init;
- (id)_compatibleVersionsWithMinimumVersion:(unsigned long long)a0 maximumVersion:(unsigned long long)a1;
- (void)dynamicStringWithIdentifier:(id)a0 timeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)cachedDynamicAssetWithIdentifier:(id)a0 parameters:(id)a1;
- (void)_purgeAssets:(id)a0;
- (void)_downloadAllPrefetchableAssets:(id /* block */)a0;
- (id)_queryForDynamicAssetsWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
