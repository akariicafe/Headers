@class NSArray, CHStrokeClutterFilter;

@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSArray *_locales;
    CHStrokeClutterFilter *_clutterFilter;
}

- (void)dealloc;
- (id)strategyIdentifier;
- (id)initWithStrokeProvider:(id)a0 locales:(id)a1 clutterFilter:(id)a2;
- (id)groupingResultUsingStrokes:(id)a0 distanceMetric:(int)a1 mergingDistanceThreshold:(double)a2 shouldCancel:(id /* block */)a3;
- (id)lineGroupingResultUsingStrokes:(id)a0 shouldCancel:(id /* block */)a1;
- (id)groupingResultForContextStrokes:(id)a0 clusteredStrokes:(id)a1 fastGroupingResult:(id)a2 point:(struct CGPoint { double x0; double x1; })a3 tokenizationLevel:(long long)a4;
- (struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; })clustersForStrokes:(id)a0 shouldMakeSingleCluster:(BOOL)a1;
- (id)fastGroupingResultWithFastGroupingClusters:(struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; } *)a0 clusteredStrokes:(id)a1;
- (struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; })_agglomerativeClusteringUsingInitialClusters:(struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; } *)a0 distanceMetric:(int)a1 maxDistanceThreshold:(float)a2 shouldCancel:(id /* block */)a3;
- (float)_maxDistanceThresholdForTokenizationLevel:(long long)a0;
- (void)_filterClusters:(struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; } *)a0 usingContextStrokes:(id)a1 clusteredStrokes:(id)a2;
- (struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; })_wordClustersForInitialClusters:(struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; } *)a0;
- (id)_strokeIdentifiersForContextStrokes:(id)a0 clusters:(struct vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; struct CHFastGroupingCluster *x1; struct __compressed_pair<CHFastGroupingCluster *, std::__1::allocator<CHFastGroupingCluster> > { struct CHFastGroupingCluster *x0; } x2; } *)a1 clusteredStrokes:(id)a2 tokenizationLevel:(long long)a3 fastGroupingResult:(id)a4;

@end
