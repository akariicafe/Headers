@class ATXApp2VecMapping;

@interface ATXApp2VecClustering : NSObject {
    ATXApp2VecMapping *_clusterCentroids;
    ATXApp2VecMapping *_appEmbeddings;
    long long _vectorLength;
    BOOL _loaded;
}

+ (id)sharedInstance;
+ (void)resetSharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)getClosestClusterCentroidForBundleId:(id)a0;
- (id)_mergeClusterCentroids:(id)a0 forBundleIds:(id)a1;
- (float)_getL2DistanceFrom:(const float *)a0 to:(float *)a1;
- (id)_getClosestClusterCentroidForVector:(const float *)a0;
- (id)getClusterCentroidsForBundleIds:(id)a0;

@end
