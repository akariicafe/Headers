@class HKQuantity, HKQuantitySample, NSDateInterval, HKQuantityType;

@interface HDWorkoutSeriesQuantity : NSObject <HDWorkoutQuantity> {
    HKQuantity *_quantity;
    NSDateInterval *_dateInterval;
    HKQuantitySample *_series;
}

@property (readonly, nonatomic) HKQuantity *hdw_quantity;
@property (readonly, nonatomic) HKQuantityType *hdw_type;
@property (readonly, nonatomic) NSDateInterval *hdw_dateInterval;
@property (readonly, nonatomic) double hdw_startTimestamp;
@property (readonly, nonatomic) double hdw_endTimestamp;
@property (readonly, nonatomic) HKQuantitySample *hdw_sample;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQuantity:(id)a0 dateInterval:(id)a1 series:(id)a2;

@end
