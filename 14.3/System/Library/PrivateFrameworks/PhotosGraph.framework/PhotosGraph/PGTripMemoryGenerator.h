@class PGGraphHighlightGroupNode, NSDate;

@interface PGTripMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfUntimelyRejects;
}

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (retain, nonatomic) PGGraphHighlightGroupNode *tripNode;
@property (readonly) unsigned long long subcategory;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)initWithSubcategory:(unsigned long long)a0 controller:(id)a1;
- (id)potentialMemoryWithTripNode:(id)a0;
- (id)curationOptionsWithKeyAsset:(id)a0;
- (id)_tripNodeForPotentialMemory:(id)a0;

@end
