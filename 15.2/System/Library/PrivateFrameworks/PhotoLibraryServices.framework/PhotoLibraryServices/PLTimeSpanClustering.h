@interface PLTimeSpanClustering : PLDataClustering

@property (nonatomic) unsigned long long averageNumberOfObjects;
@property (nonatomic) double minimumSpan;

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (id)init;
- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)a0 inDataset:(id)a1;

@end
