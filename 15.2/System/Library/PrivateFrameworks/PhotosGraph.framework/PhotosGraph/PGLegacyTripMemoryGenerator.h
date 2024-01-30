@class PGGraphHighlightGroupNode, NSDate;

@interface PGLegacyTripMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfUntimelyRejects;
}

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (retain, nonatomic) PGGraphHighlightGroupNode *tripNode;
@property (readonly) unsigned long long subcategory;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 potentialMemory:(id)a1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)relevantKeyCurationFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)initWithSubcategory:(unsigned long long)a0 controller:(id)a1;
- (id)potentialMemoryWithTripNode:(id)a0 subcategory:(unsigned long long)a1 graph:(id)a2;
- (id)_tripNodeForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantKeyCurationFeederForPotentialMemory:(id)a0 inGraph:(id)a1;

@end
