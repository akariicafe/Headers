@interface CLSSimilarStacker : NSObject {
    double _distanceThresholdForIdenticalSimilarity;
    double _distanceThresholdForIdenticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarity;
    double _distanceThresholdForSemanticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarityWithPersons;
}

@property (readonly) long long algorithm;
@property (copy, nonatomic) id /* block */ sceneprintGetterBlock;

+ (double)defaultDistanceThresholdForAlgorithm:(long long)a0 similarity:(long long)a1 baseSceneprintVersion:(unsigned long long)a2;
+ (id /* block */)distanceBlockWithMetric:(unsigned long long)a0 sceneprintGetterBlock:(id /* block */)a1;
+ (unsigned long long)preferredMetricForAlgorithm:(long long)a0 baseSceneprintVersion:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithAlgorithm:(long long)a0;
- (id)adaptiveStackSimilarItems:(id)a0 progressBlock:(id /* block */)a1;
- (double)distanceBetweenItem:(id)a0 andItem:(id)a1;
- (double)distanceThresholdForIdenticalSimilarityWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)distanceThresholdForSemanticalSimilarityWithBaseSceneprintVersion:(unsigned long long)a0;
- (void)overrideDistanceThresholdForIdenticalSimilarity:(double)a0;
- (void)overrideDistanceThresholdForIdenticalSimilarityWithPeople:(double)a0;
- (void)overrideDistanceThresholdForSemanticalSimilarity:(double)a0;
- (void)overrideDistanceThresholdForSemanticalSimilarityWithPeople:(double)a0;
- (void)overrideDistanceThresholdForSemanticalSimilarityWithPersons:(double)a0;
- (id)stackSimilarItems:(id)a0 withSimilarity:(long long)a1 timestampSupport:(BOOL)a2 progressBlock:(id /* block */)a3;
- (double)distanceThresholdForIdenticalSimilarityWithPeopleWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)distanceThresholdForSemanticalSimilarityWithPeopleWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)distanceThresholdForSemanticalSimilarityWithPersonsWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)distanceThresholdForSimilarity:(long long)a0 baseSceneprintVersion:(unsigned long long)a1;
- (id /* block */)similarGroupComparator;

@end
