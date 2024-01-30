@class PGMemoryController;

@interface PGMemoryGenerator : NSObject

@property (readonly) BOOL canFallbackToDejunkAndDedupeForShowMore;
@property BOOL isDebug;
@property unsigned long long duration;
@property (readonly, weak) PGMemoryController *controller;

+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)a0;
+ (id)fetchedAssetsFromFetchResult:(id)a0 prefetchOptions:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)keyAssetCurationOptions;
- (id)generateMemories:(unsigned long long)a0;
- (id)_createMemoryDebugWithPotentialMemory:(id)a0;
- (id)curationOptionsWithKeyAsset:(id)a0;
- (id)generateMemory;
- (id)generateAllMemories;
- (id)_generateMemoryForDryTesting;
- (BOOL)semanticalDedupingEnabledForCuration;
- (BOOL)movieDedupingEnabledForCuration;
- (BOOL)movieDedupingEnabledForExtendedCuration;
- (id)extendedCurationOptionsWithCuratedAssets:(id)a0;
- (id)extendedCuratedAssetsFromAssetCollection:(id)a0 withCuratedAssets:(id)a1;
- (id)extendedCuratedAssetsFromFeeder:(id)a0 withCuratedAssets:(id)a1;
- (BOOL)computeMissingCurationsInMemory:(id)a0 fromAssetCollection:(id)a1 keyAssetCriteria:(id)a2;
- (BOOL)computeMissingCurationsInMemory:(id)a0 fromFeeder:(id)a1 keyAssetCriteria:(id)a2;
- (BOOL)_computeMissingCurationsInMemory:(id)a0 fromFeeder:(id)a1 keyAssetCriteria:(id)a2 useMemoryGeneratorDefaultTricks:(BOOL)a3;
- (void)setDefaultValuesIfNeededOnNewMemory:(id)a0 withPotentialMemory:(id)a1;
- (void)_generateDefaultTitleAndSubtitleForMemory:(id)a0 withPotentialMemory:(id)a1;
- (BOOL)_eventIsAcceptableForUpgrade:(id)a0;
- (BOOL)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)a0 upgradedToWeekend:(BOOL *)a1;
- (BOOL)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)a0 didUpgradeToWeekend:(BOOL)a1 upgradedToMeaningfulEvent:(BOOL *)a2;
- (BOOL)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)a0;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)a0 attemptUpgradesBeforeSorting:(BOOL)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)a0;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)a0;
- (id)assetCollectionWithAssetLocalIdentifiers:(id)a0;
- (id)localIdentifiersFromAssets:(id)a0;
- (void)addLocalIdentifiersFromAssets:(id)a0 to:(id)a1;
- (id)createMemoryWithPotentialMemory:(id)a0;

@end
