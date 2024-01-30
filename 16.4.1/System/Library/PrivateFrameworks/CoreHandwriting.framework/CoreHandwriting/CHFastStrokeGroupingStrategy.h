@class NSArray, CHStrokeClutterFilter;

@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSArray *_locales;
    CHStrokeClutterFilter *_clutterFilter;
}

- (void).cxx_destruct;
- (struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; } x2; })_agglomerativeClusteringUsingInitialClusters:(void *)a0 distanceMetric:(int)a1 maxDistanceThreshold:(float)a2 shouldCancel:(id /* block */)a3;
- (void)_filterClusters:(void *)a0 usingContextStrokes:(id)a1 clusteredStrokes:(id)a2;
- (float)_maxDistanceThresholdForTokenizationLevel:(long long)a0;
- (id)_strokeIdentifiersForContextStrokes:(id)a0 clusters:(void *)a1 clusteredStrokes:(id)a2 tokenizationLevel:(long long)a3 fastGroupingResult:(id)a4;
- (struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; } x2; })_wordClustersForInitialClusters:(void *)a0;
- (struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *x0; } x2; })clustersForStrokes:(id)a0 shouldMakeSingleCluster:(BOOL)a1;
- (id)fastGroupingResultWithFastGroupingClusters:(void *)a0 clusteredStrokes:(id)a1;
- (id)groupingResultForContextStrokes:(id)a0 clusteredStrokes:(id)a1 fastGroupingResult:(id)a2 point:(struct CGPoint { double x0; double x1; })a3 tokenizationLevel:(long long)a4;
- (id)groupingResultUsingStrokes:(id)a0 distanceMetric:(int)a1 mergingDistanceThreshold:(double)a2 shouldCancel:(id /* block */)a3;
- (id)initWithStrokeProvider:(id)a0 locales:(id)a1 clutterFilter:(id)a2;
- (id)lineGroupingResultUsingStrokes:(id)a0 shouldCancel:(id /* block */)a1;
- (id)strategyIdentifier;

@end
