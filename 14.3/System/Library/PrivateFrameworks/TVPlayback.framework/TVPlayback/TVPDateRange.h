@class NSDate;

@interface TVPDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (BOOL)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dateRangeByIntersectingDateRange:(id)a0;

@end
