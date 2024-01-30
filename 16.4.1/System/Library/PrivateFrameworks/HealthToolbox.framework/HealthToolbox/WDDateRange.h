@class NSDate;

@interface WDDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (id)dateRangeWithStartDate:(id)a0 endDate:(id)a1;
+ (id)dateRangeWithTimePeriod:(long long)a0 anchorDate:(id)a1;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)_getEndDateFromStartDate:(id)a0 timePeriod:(long long)a1;
- (id)_getStartDateFromAnchorDate:(id)a0 timePeriod:(long long)a1;
- (BOOL)dateInRange:(id)a0;
- (id)initWithTimePeriod:(long long)a0 anchorDate:(id)a1;

@end
