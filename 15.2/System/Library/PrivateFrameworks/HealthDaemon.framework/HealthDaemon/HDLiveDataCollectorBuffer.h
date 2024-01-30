@class NSMutableArray;
@protocol HDSensorDatum;

@interface HDLiveDataCollectorBuffer : NSObject {
    NSMutableArray *_buffer;
    id<HDSensorDatum> _lastProcessedDatum;
}

@property (copy, nonatomic) id /* block */ objectCreationBlock;
@property (copy, nonatomic) id /* block */ sensorDatumComparisonBlock;
@property (nonatomic) double bufferAggregationInterval;

- (void).cxx_destruct;
- (id)init;
- (id)addSensorDatum:(id)a0;

@end
