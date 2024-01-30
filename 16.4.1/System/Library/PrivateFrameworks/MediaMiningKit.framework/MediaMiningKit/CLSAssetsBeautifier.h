@class NSSet, CLSSimilarStacker, NSObject;
@protocol OS_os_log;

@interface CLSAssetsBeautifier : NSObject {
    CLSSimilarStacker *_similarStacker;
}

@property (nonatomic) BOOL enableStatisticalSampling;
@property (nonatomic) BOOL enableNetworkAccess;
@property (nonatomic) BOOL enableIntermediateNaturalClustering;
@property (nonatomic) BOOL enableFinalNaturalClustering;
@property (nonatomic) BOOL enableFinalTimeClustering;
@property (nonatomic) BOOL usesKMeans;
@property (nonatomic) BOOL discardNonEligibleClustersInSampling;
@property (copy, nonatomic) NSSet *identifiersOfRequiredItems;
@property (copy, nonatomic) NSSet *identifiersOfEligibleItems;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (id)beautifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)itemIsRequired:(id)a0;
- (id)bestItemInItems:(id)a0;
- (id)deduplicateItems:(id)a0 debugInfo:(id)a1;
- (id)deduplicateItems:(id)a0 withDuration:(double)a1 andSimilarity:(long long)a2 debugInfo:(id)a3;
- (id)performWithItems:(id)a0 maximumNumberOfItemsToChoose:(unsigned long long)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)performWithItems:(id)a0 maximumNumberOfItemsToChoose:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (id)requiredItemsInItems:(id)a0;
- (id)_clustersBySplittingZeroDiameterClustersInClusters:(id)a0 targetingNumberOfClusters:(unsigned long long)a1;
- (id)_naturalClusteringBestItemInItems:(id)a0;
- (id)_naturalClusteringWithItems:(id)a0 withSimilarity:(long long)a1 timestampSupport:(BOOL)a2 debugInfo:(id)a3;
- (id /* block */)hierarchicalClusteringDistanceBlock;
- (id)rankSimilarItems:(id)a0;
- (id)sampledItemsInSortedItems:(id)a0 maximumNumberOfItemsToChoose:(unsigned long long)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)sortedItemsWithItems:(id)a0;
- (id /* block */)timeClusteringDistanceBlock;

@end
