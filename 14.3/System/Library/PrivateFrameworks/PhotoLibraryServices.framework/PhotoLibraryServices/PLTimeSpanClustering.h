@interface PLTimeSpanClustering : PLDataClustering

@property (nonatomic) unsigned long long averageNumberOfObjects;
@property (nonatomic) double minimumSpan;

- (id)init;
- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)a0 inDataset:(id)a1;
- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;

@end
