@interface PLDBSCANClustering : PLDataDensityClustering

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (id)_expandClusterForObject:(id)a0 dataset:(id)a1 objectsMappedToCluster:(struct __CFSet { } *)a2 visitedObjects:(unsigned long long *)a3 distancesFlatMatrix:(double *)a4 neighbors:(id)a5;
- (id)_neighborsAtIndex:(unsigned long long)a0 withDistancesFlatMatrix:(double *)a1 datasetSize:(unsigned long long)a2;

@end
