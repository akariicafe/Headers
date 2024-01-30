@interface PGMemoryGenerationHelper : NSObject

+ (id)feederForMemoriesWithAssetCollection:(id)a0 memoryCurationSession:(id)a1 graph:(id)a2 allowGuestAsset:(BOOL)a3;
+ (id)feederForMemoriesWithAssetLocalIdentifiers:(id)a0 memoryCurationSession:(id)a1 graph:(id)a2 allowGuestAsset:(BOOL)a3;
+ (id)feederForMemoriesWithAssetFetchResult:(id)a0 memoryCurationSession:(id)a1 graph:(id)a2;
+ (id)feederForMemoriesWithFeeder:(id)a0 topTierAestheticScore:(double)a1 didFeederChange:(BOOL *)a2 curationContext:(id)a3;
+ (id)scoringContextForMemoriesWithAssets:(id)a0 withTopTierAestheticScore:(double)a1;
+ (BOOL)prepareAssets:(id)a0 forMemoriesWithTopTierAestheticScore:(double)a1 curationContext:(id)a2;
+ (id)assetUUIDsFromAssets:(id)a0;
+ (id)assetLocalIdentifiersFromAssets:(id)a0;
+ (id)keyAssetFetchResultForHighlightGroupUUIDs:(id)a0 curationManager:(id)a1 allowGuestAsset:(BOOL)a2;
+ (id)assetFetchResultForMomentNodes:(id)a0 inLocationOrAreaNode:(id)a1 requireInteresting:(BOOL)a2 curationManager:(id)a3 progressReporter:(id)a4;
+ (BOOL)dates:(id)a0 passSpreadicityWithMinimumCardinal:(unsigned long long)a1 minimumTimeInterval:(double)a2;

@end
