@interface PLFrequentLocationProcessor : NSObject

+ (id)_clustersFromLocationsOfInterest:(id)a0 forItems:(id)a1 remainingItemsToCluster:(out id *)a2 progressBlock:(id /* block */)a3;
+ (id)_coarseClustersForItems:(id)a0 progressBlock:(id /* block */)a1;
+ (double)_computeWeekendFrequencyForMoments:(id)a0;
+ (id)_finalClustersFromCoarseClusters:(id)a0 progressBlock:(id /* block */)a1;
+ (id)processFrequentLocationsWithItems:(id)a0 locationsOfInterest:(id)a1 progressBlock:(id /* block */)a2;

@end
