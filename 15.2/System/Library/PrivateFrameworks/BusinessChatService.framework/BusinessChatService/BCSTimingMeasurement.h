@class NSArray, NSDate;

@interface BCSTimingMeasurement : BCSMeasurement {
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_realTimeMeasurementHandlers;
}

@property (readonly, nonatomic) long long timingMeasurementType;
@property (readonly, nonatomic) double duration;

+ (id)newTimingMeasurement:(long long)a0 withHandlers:(id)a1;

- (void)end;
- (void)begin;
- (void).cxx_destruct;

@end
