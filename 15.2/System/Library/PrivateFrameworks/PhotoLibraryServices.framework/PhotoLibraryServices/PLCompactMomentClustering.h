@class NSArray;

@interface PLCompactMomentClustering : NSObject {
    NSArray *_locationsOfInterest;
    BOOL _routineIsAvailable;
}

- (id)_clusterAssetsWithUsableLocation:(id)a0;
- (id)_clusterAssetsWithUnusableLocation:(id)a0;
- (id)assetsByLocationTypeFromAssets:(id)a0 locationsOfInterest:(id)a1;
- (id)_runDBSCANClusteringWithAssets:(id)a0;
- (id)createAssetClustersForAssetsInDay:(id)a0;
- (id)newAssetClusterFromAssetsSortedByDate:(id)a0;
- (id)_mergeAssetClustersWithLocation:(id)a0 withAssetClustersWithoutLocation:(id)a1;
- (id)initWithDataManager:(id)a0;
- (id)_processedLocationTypeByAssetUUIDFromAssets:(id)a0;
- (id)_shareStateByAssetUUIDFromAssets:(id)a0 momentHasMixedOwnership:(BOOL *)a1;
- (void)dealloc;
- (id)_assetClustersFromDataClusters:(id)a0;

@end
