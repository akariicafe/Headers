@class NSArray, NSDictionary, RTLearnedLocationStore, RTLearnedPlace, RTLearnedPlaceTypeInferenceStats;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject

@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLearnedPlace *place;
@property (nonatomic) unsigned long long visitsCount;
@property (retain, nonatomic) NSArray *visitIntervals;
@property (retain, nonatomic) NSDictionary *mlFeatures;
@property (readonly, nonatomic) RTLearnedPlaceTypeInferenceStats *stats;

+ (id)extractDailyStatsFromVisits:(id)a0;
+ (double)extractTopMedianDwellTimeFromVisits:(id)a0;
+ (id)extractWeeklyStatsFromDailyStats:(id)a0;
+ (id)visitsWithDwellTimeBetweenDateRange:(id)a0 start:(id)a1 end:(id)a2;

- (void)log;
- (id)description;
- (void).cxx_destruct;
- (id)getMlFeatures;
- (id)initWithLearnedLocationStore:(id)a0 place:(id)a1 visits:(id)a2;
- (id)localDeviceVisitsForVisits:(id)a0;

@end
