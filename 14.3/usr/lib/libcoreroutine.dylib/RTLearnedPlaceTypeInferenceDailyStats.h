@class NSDate;

@interface RTLearnedPlaceTypeInferenceDailyStats : NSObject

@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) unsigned long long visitCount;
@property (readonly, nonatomic) double aggregateDwellTimeBetweenDateRange;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStart:(id)a0 end:(id)a1 visitCount:(unsigned long long)a2 aggregateDwellTimeBetweenDateRange:(double)a3;

@end
