@class PGMemoryGenerationContext, PGGraphLocationHelper, PGMemoryCurationSession, PGMemoryMomentNodesWithBlockedFeatureCache, NSString, NSObject, PGMemoryController, PGMemoryProcessedScenesAndFacesCache;
@protocol OS_os_log;

@interface PGMemoryGenerator : NSObject <PGMemoryGeneratorProtocol, PGMemoryEnrichmentProtocol>

@property BOOL isDebug;
@property (readonly, weak) PGMemoryController *controller;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) PGMemoryCurationSession *memoryCurationSession;
@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache;
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache;
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper;
@property (readonly, nonatomic) PGMemoryGenerationContext *memoryGenerationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)a0;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (id)defaultTitleGeneratorWithMomentNodes:(id)a0 keyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 category:(unsigned long long)a4 creationDate:(id)a5 titleGenerationContext:(id)a6;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)a0;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)a0 withGraph:(id)a1 attemptUpgradesBeforeSorting:(BOOL)a2 usingBlock:(id /* block */)a3;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)addLocalIdentifiersFromAssets:(id)a0 to:(id)a1;
- (id)baseCurationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)a0 curatedAssets:(id)a1 extendedCuratedAssets:(id)a2 titleGenerationContext:(id)a3 inGraph:(id)a4;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (id)extendedCurationOptionsWithRequiredAssetUUIDs:(id)a0 triggeredMemory:(id)a1;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithMemoryCurationSession:(id)a0 loggingConnection:(id)a1;
- (id)initWithMemoryGenerationContext:(id)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)localIdentifiersFromAssets:(id)a0;
- (id)relevantCurationFeederForTriggeredMemory:(id)a0 relevantFeeder:(id)a1 inGraph:(id)a2 allowGuestAsset:(BOOL)a3 progressReporter:(id)a4;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)relevantKeyCurationFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)semanticalDedupingEnabledForCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)uuidsOfRequiredAssetsWithKeyAsset:(id)a0 triggeredMemory:(id)a1 inGraph:(id)a2 progressReporter:(id)a3;

@end
