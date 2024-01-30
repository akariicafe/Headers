@class NSString, NSDate;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long meaning;
@property (retain, nonatomic) NSString *meaningfulEventUUID;
@property (nonatomic) BOOL skipsCollectionTitle;
@property (nonatomic) unsigned long long memoryCategory;

+ (id)_invalidMeaningLabelsForMemories;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)a0;

@end
