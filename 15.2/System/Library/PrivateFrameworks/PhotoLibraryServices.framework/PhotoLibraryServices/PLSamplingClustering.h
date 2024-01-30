@interface PLSamplingClustering : PLDataDensityClustering

@property (nonatomic) unsigned long long numberOfClusters;

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;

@end
