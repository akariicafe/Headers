@class NSArray;

@interface RTLearnedPlaceTypeInferenceStats : NSObject

@property (readonly, nonatomic) NSArray *weeklyStats;
@property (readonly, nonatomic) double weeklyAggregateDwellTimeBetweenDateRangeAverage;
@property (readonly, nonatomic) double weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
@property (readonly, nonatomic) double weeklyTotalDailyVisitCountAverage;
@property (readonly, nonatomic) double weeklyDaysWithNonZeroDwellTimeAverage;
@property (readonly, nonatomic) long long totalDailyVisitCount;
@property (readonly, nonatomic) long long weeksWithNonZeroDwellTime;
@property (readonly, nonatomic) double topMedianDwellTime;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWeeklyStats:(id)a0 topMedianDwellTime:(double)a1;

@end
