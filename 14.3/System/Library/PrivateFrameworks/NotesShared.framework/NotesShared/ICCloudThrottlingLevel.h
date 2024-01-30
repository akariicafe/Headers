@interface ICCloudThrottlingLevel : NSObject

@property (nonatomic) double batchInterval;
@property (nonatomic) unsigned long long numberOfBatches;

- (id)initWithBatchInterval:(double)a0 numberOfBatches:(unsigned long long)a1;
- (id)init;
- (id)description;
- (id)debugDescription;

@end
