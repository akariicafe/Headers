@class RTLearnedPlace, RTLearnedPlaceTypeInferenceStats;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject

@property (retain, nonatomic) RTLearnedPlace *place;
@property (nonatomic) unsigned long long visitsCount;
@property (readonly, nonatomic) RTLearnedPlaceTypeInferenceStats *stats;

+ (id)visitsWithDwellTimeBetweenDateRange:(id)a0 start:(id)a1 end:(id)a2;
+ (id)extractDailyStatsFromVisits:(id)a0;
+ (id)extractWeeklyStatsFromDailyStats:(id)a0;
+ (double)extractTopMedianDwellTimeFromVisits:(id)a0;

- (void).cxx_destruct;
- (void)log;
- (id)description;
- (id)initWithPlace:(id)a0 visits:(id)a1;

@end
