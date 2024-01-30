@interface RTLearnedPlaceTypeInferenceWeeklyStats : NSObject

@property (readonly, nonatomic) double dailyAggregateDwellTimeBetweenDateRangeAverage;
@property (readonly, nonatomic) double dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;
@property (readonly, nonatomic) long long totalDailyVisitCount;
@property (readonly, nonatomic) long long daysWithNonZeroDwellTime;

- (id)description;
- (id)initWithDailyStats:(id)a0;

@end
