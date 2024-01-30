@class NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)sortDescriptorsForMarkets;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)sortDescriptorsForCityCode;
- (id)_queriesForMarketIdentifer:(id)a0;
- (void)_retrieveAssetWithQueries:(id)a0 latestCompatibilityVersion:(unsigned long long)a1 userInitiated:(BOOL)a2 sortDescriptors:(id)a3 timeout:(unsigned long long)a4 catalogExpirationDays:(long long)a5 completionHandler:(id /* block */)a6;
- (id)_compatibleVersionsWithMinimumVersion:(unsigned long long)a0 maximumVersion:(unsigned long long)a1;
- (id)_queriesForCityCodeStationProvider:(id)a0;
- (void)_downloadAsset:(id)a0 userInitiated:(BOOL)a1 timeout:(long long)a2 completion:(id /* block */)a3;
- (void)_executeQueries:(id)a0 currentIndex:(unsigned long long)a1 userInitiated:(BOOL)a2 sortDescriptors:(id)a3 timeout:(long long)a4 completion:(id /* block */)a5;
- (void)fetchAssetsForMarketWithIdentifier:(id)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_downloadOptionsWithUserInitiation:(BOOL)a0 timeout:(long long)a1;

@end
