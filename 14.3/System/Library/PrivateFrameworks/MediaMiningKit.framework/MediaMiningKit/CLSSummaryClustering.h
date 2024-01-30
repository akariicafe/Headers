@interface CLSSummaryClustering : NSObject

@property (nonatomic) BOOL enableConcurrency;
@property (nonatomic) double optimalDayDistributionThreshold;
@property (nonatomic) unsigned long long timeSpanDensityAverageNumberOfObjects;
@property (nonatomic) BOOL enableDensityClusteringLocationsDistance;
@property (nonatomic) unsigned long long densityClusteringLocationsDistanceUnit;
@property (nonatomic) double diffuseDensityClusteringMaximumDistance;
@property (nonatomic) unsigned long long diffuseDensityClusteringMinimumNumberOfObjects;
@property (nonatomic) double conciseDensityClusteringMaximumDistance;
@property (nonatomic) unsigned long long conciseDensityClusteringMinimumNumberOfObjects;
@property (nonatomic) BOOL enableMultipassDensityClustering;
@property (nonatomic) unsigned long long adaptiveElectionMinimumNumberOfItemsByCluster;
@property (nonatomic) unsigned long long adaptiveElectionMaximumNumberOfItemsByCluster;
@property (nonatomic) BOOL enableAdaptiveElectionSmoother;
@property (nonatomic) BOOL enableAdaptiveElectionSmootherAutomaticLimit;
@property (nonatomic) unsigned long long adaptiveElectionSmootherMaximumLimit;
@property (nonatomic) unsigned long long adaptiveElectionSmootherMinimumLimit;

+ (id)clustering;
+ (double)maximumScoreForItems:(id)a0;
+ (double)scoreForItems:(id)a0;
+ (double)meanScoreForItems:(id)a0;

- (id)init;
- (id)performWithItems:(id)a0 maximumNumberOfItemsToElect:(unsigned long long)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)performWithItems:(id)a0 maximumNumberOfItemsToElect:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (id)densityClustersWithItems:(id)a0 progressBlock:(id /* block */)a1;
- (id /* block */)densityClusteringDistanceBlock;
- (id)_densityClustersWithItems:(id)a0 progressBlock:(id /* block */)a1;
- (id)adaptiveElection:(id)a0 maximumNumberOfItemsToElect:(unsigned long long)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;

@end
