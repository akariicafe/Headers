@class NSArray, NSMutableArray;

@interface HDQuantityAggregationResult : NSObject

@property (readonly, copy, nonatomic) NSArray *aggregatedSamples;
@property (readonly, copy, nonatomic) NSArray *consumedSensorData;
@property (readonly, copy, nonatomic) NSMutableArray *remainingSensorData;

- (void).cxx_destruct;
- (id)initWithAggregatedSamples:(id)a0 consumedData:(id)a1 remainingData:(id)a2;

@end
