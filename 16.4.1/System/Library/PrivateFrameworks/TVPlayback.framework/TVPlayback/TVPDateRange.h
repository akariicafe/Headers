@class NSDate;

@interface TVPDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (BOOL)containsDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (id)dateRangeByIntersectingDateRange:(id)a0;

@end
