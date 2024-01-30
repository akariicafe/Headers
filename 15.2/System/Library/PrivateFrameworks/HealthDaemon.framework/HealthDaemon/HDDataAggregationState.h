@class HKSample, NSMutableArray;

@interface HDDataAggregationState : NSObject

@property (readonly, nonatomic) NSMutableArray *unaggregatedSensorData;
@property (readonly, nonatomic) HKSample *openSeries;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRemainingSensorData:(id)a0;
- (id)initWithRemainingSensorData:(id)a0 currentSeries:(id)a1;

@end
