@class NSMutableArray, RTLearnedVisit;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *placeStats;
@property (retain, nonatomic) RTLearnedVisit *firstVisit;
@property (retain, nonatomic) RTLearnedVisit *lastVisit;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)submitVisits:(id)a0 place:(id)a1;
- (id)inferPlaceTypes;
- (id)inferPlaceTypesFromDailyPatterns;
- (id)inferPlaceTypesFromTopMedianDwellTime;

@end
