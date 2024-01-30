@interface HKCardioFitnessUtilities : NSObject

+ (id)cardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)cardioFitnessDataForBiologicalSex:(long long)a0 age:(long long)a1;
+ (id)cardioFitnessDataForLevel:(long long)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)cardioFitnessDataForLevel:(long long)a0 date:(id)a1 healthStore:(id)a2;
+ (id)cardioFitnessDataForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)a0 healthStore:(id)a1;
+ (long long)cardioFitnessLevelForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)a0 inHealthStore:(id)a1;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)_localizationKeyForCardioFitnessLevel:(long long)a0 keyVariant:(id)a1;
+ (id)cardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 preferredOverlay:(long long)a2 analyticsDelegate:(id)a3 trendModel:(id)a4;
+ (BOOL)cardioFitnessLevelChartShouldDisplayLowerBound:(long long)a0;
+ (BOOL)cardioFitnessLevelChartShouldDisplayUpperBound:(long long)a0;
+ (id)cardioFitnessLevelDataForChartData:(id)a0;
+ (id)cardioFitnessLookupPropertiesForChartData:(id)a0;
+ (id)effectiveChartPointDateWithStatisticsInterval:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)localizationKeyForCardioFitnessLevel:(long long)a0;
+ (id)localizedStringForCardioFitnessDescription:(long long)a0 age:(long long)a1;
+ (id)localizedStringForCardioFitnessLevel:(long long)a0;
+ (id)localizedStringForCardioFitnessLevelName:(long long)a0;
+ (id)localizedStringForCardioFitnessTitle:(long long)a0;
+ (id)vo2MaxInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 trendModel:(id)a2;

@end
