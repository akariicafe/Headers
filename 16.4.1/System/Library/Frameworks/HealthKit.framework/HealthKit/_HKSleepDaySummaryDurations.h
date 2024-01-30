@interface _HKSleepDaySummaryDurations : NSObject

@property (readonly, nonatomic) double inBedDuration;
@property (readonly, nonatomic) double sleepDuration;
@property (readonly, nonatomic) double unspecifiedSleepDuration;
@property (readonly, nonatomic) double coreSleepDuration;
@property (readonly, nonatomic) double deepSleepDuration;
@property (readonly, nonatomic) double remSleepDuration;
@property (readonly, nonatomic) double awakeDuration;

+ (id)durationsFromSleepPeriods:(id)a0 dateInterval:(id)a1;

- (id)initWithInBedDuration:(double)a0 sleepDuration:(double)a1 unspecifiedSleepDuration:(double)a2 coreSleepDuration:(double)a3 deepSleepDuration:(double)a4 remSleepDuration:(double)a5 awakeDuration:(double)a6;

@end
