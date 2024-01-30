@interface CLSSimilarStacker : NSObject

@property (readonly) long long algorithm;
@property (copy, nonatomic) id /* block */ sceneprintGetterBlock;
@property (nonatomic) double distanceThresholdForIdenticalSimilarity;
@property (nonatomic) double distanceThresholdForIdenticalSimilarityWithPeople;
@property (nonatomic) double distanceThresholdForSemanticalSimilarity;
@property (nonatomic) double distanceThresholdForSemanticalSimilarityWithPeople;
@property (nonatomic) double distanceThresholdForSemanticalSimilarityWithPersons;

+ (double)defaultDistanceThresholdForAlgorithm:(long long)a0 similarity:(long long)a1;
+ (id /* block */)distanceBlockForAlgorithm:(long long)a0 sceneprintGetterBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithAlgorithm:(long long)a0;
- (double)distanceBetweenItem:(id)a0 andItem:(id)a1;
- (id)stackSimilarItems:(id)a0 withSimilarity:(long long)a1 timestampSupport:(BOOL)a2 progressBlock:(id /* block */)a3;
- (id)adaptiveStackSimilarItems:(id)a0 progressBlock:(id /* block */)a1;
- (id /* block */)similarGroupComparator;
- (double)distanceThresholdForSimilarity:(long long)a0;

@end
