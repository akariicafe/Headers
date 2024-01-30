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

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)_nodesWithFeaturesOfType:(unsigned long long)a0 fromMeaningfulEvent:(id)a1;
- (id)_extraFeatureNodesFromMeaningfulEvent:(id)a0 meaning:(unsigned long long)a1 featureType:(unsigned long long)a2;
- (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)a0 meaningfulEvent:(id)a1;
- (unsigned long long)_extendedMeaningForRestaurantEvent:(id)a0;
- (unsigned long long)_extendedMeaningForActivityEvent:(id)a0;
- (BOOL)_supportsAggregationsForMeaning:(unsigned long long)a0 primaryFeatureType:(unsigned long long)a1 secondaryFeatureType:(unsigned long long)a2;
- (id)_stringForExtendedMeaning:(unsigned long long)a0;
- (BOOL)_canMakeMemoryWithMeaningfulEvents:(id)a0 forMeaning:(unsigned long long)a1 isOverTheYears:(BOOL)a2;
- (id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)a0;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)a0;
- (BOOL)_computeRelevantAssetsForPotentialMemory:(id)a0;
- (id)_filterAssets:(id)a0 withLocation:(id)a1;
- (id)_filterAssets:(id)a0 withPositiveLocations:(id)a1 negativeLocations:(id)a2 maximumDistance:(double)a3;
- (id)_filterAssets:(id)a0 inMomentNode:(id)a1 forCityNode:(id)a2;
- (id)_filterAssets:(id)a0 inMomentNode:(id)a1 forAreaNode:(id)a2;

@end
