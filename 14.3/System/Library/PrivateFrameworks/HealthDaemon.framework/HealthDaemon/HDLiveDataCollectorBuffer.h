@class NSMutableArray;
@protocol HDSensorDatum;

@interface HDLiveDataCollectorBuffer : NSObject {
    NSMutableArray *_buffer;
    id<HDSensorDatum> _lastProcessedDatum;
}

@property (copy, nonatomic) id /* block */ objectCreationBlock;
@property (copy, nonatomic) id /* block */ sensorDatumComparisonBlock;
@property (nonatomic) double bufferAggregationInterval;

- (id)init;
- (void).cxx_destruct;
- (id)_processBufferIfSensorDatumInvalid:(id)a0;
- (BOOL)_bufferLengthAchieved:(double)a0 buffer:(id)a1 lastProcessedDatum:(id)a2;
- (id)_createObjectsFromBuffer:(id)a0 lastProcessedDatum:(id)a1;
- (void)_resetBuffer;
- (long long)_bufferStateForSensorDatum:(id)a0;
- (id)addSensorDatum:(id)a0;

@end
