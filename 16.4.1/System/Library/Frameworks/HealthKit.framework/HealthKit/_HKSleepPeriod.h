@class NSArray, NSDateInterval, NSString, NSDate;

@interface _HKSleepPeriod : NSObject

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double inBedDuration;
@property (readonly, nonatomic) double asleepDuration;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSString *timeZoneName;

- (void)_setType:(long long)a0;
- (void).cxx_destruct;
- (void)enumerateDateIntervalsForCategoryValue:(long long)a0 intersectedWithDateInterval:(id)a1 block:(id /* block */)a2;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 segments:(id)a2;
- (id)segmentDateIntervalsForCategoryValue:(long long)a0 intersectedWithDateInterval:(id)a1;
- (id)segmentsForCategory:(long long)a0;

@end
