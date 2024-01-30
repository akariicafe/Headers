@class NSArray, NSDate;

@interface _HKSleepPeriodSegment : NSObject

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 category:(long long)a2 samples:(id)a3 duration:(double)a4;

@end
