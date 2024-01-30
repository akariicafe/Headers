@class CLSSimilarStacker, PLKMeansClustering, NSObject;
@protocol OS_os_log;

@interface PGDejunkerDeduper : NSObject {
    CLSSimilarStacker *_similarStacker;
    PLKMeansClustering *_kMeanTimeClusterer;
}

@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (id)init;
- (void).cxx_destruct;
- (id)identicallyDedupedItemsInItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)bestItemGroupsBasedOnFaceprintsWithItemGroups:(id)a0 options:(id)a1;
- (id)bestItemGroupsBasedOnSceneprintsWithItemGroups:(id)a0 options:(id)a1;
- (id)bestItemsInItems:(id)a0 options:(id)a1;
- (id)debugPersonStringForItem:(id)a0;
- (id)dejunkedDedupedItemsInItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)dejunkedItemsWithItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)a0;
- (id)featureWithItem:(id)a0;
- (id)finalItemsWithItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (double)identicalDedupingSimilarityForItemFeature:(id)a0 options:(id)a1;
- (double)identicalDedupingTimeIntervalForItemFeature:(id)a0 options:(id)a1;
- (BOOL)isJunkForItem:(id)a0;
- (id)itemsByFeatureWithItems:(id)a0;
- (id)itemsSortedByScoreWithItems:(id)a0 options:(id)a1;
- (id)requiredItemsInItems:(id)a0 options:(id)a1 containStronglyRequiredItems:(BOOL *)a2;
- (double)semanticalDedupingSimilarityForItemFeature:(id)a0 options:(id)a1;
- (double)semanticalDedupingTimeIntervalForItemFeature:(id)a0 options:(id)a1;
- (id)semanticallyDedupedItemsInItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (BOOL)shouldPerformIdenticalDedupingForItemFeature:(id)a0 options:(id)a1;
- (BOOL)shouldPerformSemanticalDedupingForItemFeature:(id)a0 options:(id)a1;
- (id)splitItemGroupsWithItemGroups:(id)a0 maximumNumberOfItemsPerGroup:(unsigned long long)a1 debugInfo:(id)a2;
- (id)splitItemGroupsWithTimeSortedItems:(id)a0 numberOfBuckets:(unsigned long long)a1;
- (id)timeGroupsOfTimeSortedItemsWithTimeSortedItems:(id)a0 timeInterval:(double)a1 maximumTimeGroupExtension:(double)a2;
- (id)timeSortedItemsWithItems:(id)a0;

@end
