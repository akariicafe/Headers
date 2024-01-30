@interface PLDataDensityClustering : PLDataClustering

@property (nonatomic) double maximumDistance;
@property (nonatomic) unsigned long long minimumNumberOfObjects;

- (id)init;

@end
