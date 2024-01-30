@class NSDictionary, NSDate;

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfUntimelyRejects;
    unsigned long long _extendedMeaning;
    NSDictionary *_graphRequiredCriteriaByIdentifier;
}

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long meaning;

+ (id)_mostSpecificLabelForMeaning:(unsigned long long)a0;
+ (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)a0 meaningfulEvent:(id)a1;
+ (id)_nodesWithFeaturesOfType:(unsigned long long)a0 fromMeaningfulEvent:(id)a1;
+ (id)extraFeatureNodesFromMeaningfulEvent:(id)a0 meaning:(unsigned long long)a1 featureType:(unsigned long long)a2;
+ (unsigned long long)_extendedMeaningForRestaurantEvent:(id)a0;
+ (unsigned long long)_extendedMeaningForRestaurantMeaningLabel:(id)a0;
+ (unsigned long long)_extendedMeaningForActivityEvent:(id)a0;
+ (unsigned long long)_extendedMeaningForActivityMeaningLabel:(id)a0;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)_extraFeatureNodesFromMeaningfulEvent:(id)a0 meaning:(unsigned long long)a1 featureType:(unsigned long long)a2;
- (BOOL)_supportsAggregationsForMeaning:(unsigned long long)a0 primaryFeatureType:(unsigned long long)a1 secondaryFeatureType:(unsigned long long)a2;
- (id)_stringForExtendedMeaning:(unsigned long long)a0;
- (BOOL)_canMakeMemoryWithMeaningfulEvents:(id)a0 forMeaning:(unsigned long long)a1 isOverTheYears:(BOOL)a2;
- (id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)a0 withGraph:(id)a1;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)a0 withGraph:(id)a1;
- (BOOL)_computeRelevantAssetsForPotentialMemory:(id)a0 withGraph:(id)a1;
- (id)_filteredAssetsFromAssetCollection:(id)a0 throughCriteria:(id)a1;

@end
