@interface ICCloudThrottlingLevel : NSObject

@property (readonly, nonatomic) double batchInterval;
@property (readonly, nonatomic) double maximumBatchIntervalFactor;
@property (readonly, nonatomic) unsigned long long numberOfBatches;

- (id)initWithBatchInterval:(double)a0 maximumBatchIntervalFactor:(double)a1 numberOfBatches:(unsigned long long)a2;
- (id)debugDescription;
- (id)init;
- (id)description;

@end
