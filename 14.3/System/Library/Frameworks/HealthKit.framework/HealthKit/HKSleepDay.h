@class NSArray, NSDateInterval, NSDate;

@interface HKSleepDay : NSObject

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *sleepPeriods;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double inBedDuration;
@property (readonly, nonatomic) double asleepDuration;

- (id)initWithStartDate:(id)a0 endDate:(id)a1 sleepPeriods:(id)a2;
- (void).cxx_destruct;
- (id)primarySleepPeriod;
- (id)description;

@end
