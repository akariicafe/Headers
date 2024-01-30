@interface FCSWeeklyGoalRecommendationEngine : NSObject

+ (id)_activitySummariesSortedByMoveMinutes:(id)a0;
+ (id)_activitySummariesSortedByEnergyBurn:(id)a0;
+ (id)_activitySummariesSortedByMoveValue:(id)a0 activityMoveMode:(long long)a1;
+ (double)_averageMoveFromActivitySummaries:(id)a0 forNumberOfSamples:(long long)a1;
+ (BOOL)_isMoveGoalAchievedForActivitySummary:(id)a0;
+ (double)_minThresholdForActivityMoveMode:(long long)a0;
+ (unsigned long long)_numSamplesWithMoveGreaterThanTheGoalByPercent:(double)a0 forSummaries:(id)a1;
+ (long long)_numberOfDaysGoalAchievedInSummaries:(id)a0;
+ (unsigned long long)_numberOfDaysInMostRecentWinningStreakForSummariesOrderedByDate:(id)a0;
+ (unsigned long long)_numberOfInvalidDaysFromActivitySummaries:(id)a0 forExpectedNumberOfSamples:(unsigned long long)a1;
+ (double)recommendedNewWeeklyGoalForActivitySummaries:(id)a0;

@end
