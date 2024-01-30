@interface PXSearchResultsAssetCurator : NSObject

+ (void)performCurationForAssetResults:(id)a0 sceneIdentifiers:(id)a1 searchQuery:(id)a2 completion:(id /* block */)a3;
+ (id)_sampledAssetUUIDsFromAssetResults:(id)a0 curatedAssetLimit:(unsigned long long)a1 priorityAssetUUID:(id)a2 maxNumberToSample:(unsigned long long)a3 rangeToSample:(unsigned long long)a4;
+ (id)_sortedCuratedAssetsFromCurationObjects:(id)a0 priorityAssetUUID:(id)a1 curatedAssetLimit:(unsigned long long)a2 canPrioritizeDominantObjectResults:(BOOL)a3;
+ (void)_curationObjectsFromAssets:(id)a0 scenesMap:(id)a1 sceneIdentifiers:(id)a2 completion:(id /* block */)a3;
+ (id)_fetchResultForCuratedAssets:(id)a0;
+ (id)_fetchAssetsForAssetUUIDs:(id)a0;

@end
