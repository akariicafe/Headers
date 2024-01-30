@interface HKCardioFitnessUtilities : NSObject

+ (id)vo2MaxInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1;
+ (id)cardioFitnessLookupPropertiesForChartData:(id)a0;
+ (id)localizedStringForCardioFitnessTitle:(long long)a0;
+ (BOOL)cardioFitnessLevelChartShouldDisplayUpperBound:(long long)a0;
+ (BOOL)cardioFitnessLevelChartShouldDisplayLowerBound:(long long)a0;
+ (id)cardioFitnessLevelDataForChartData:(id)a0;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)a0 healthStore:(id)a1;
+ (id)cardioFitnessDataForLevel:(long long)a0 date:(id)a1 healthStore:(id)a2;
+ (id)cardioFitnessDataForLevel:(long long)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)_queryCoreMotionClassifications;
+ (id)_stubbedCardioFitnessLevelData;
+ (id)_parseCoreMotionClassificationData:(id)a0;
+ (id)_cardioFitnessLevels;
+ (id)_flattenedThresholdsForLevelData:(id)a0;
+ (id)cardioFitnessDataForBiologicalSex:(long long)a0 age:(long long)a1;
+ (id)_lookupPropertiesForDate:(id)a0 healthStore:(id)a1;
+ (id)cardioFitnessDataForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (long long)cardioFitnessLevelForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)a0 biologicalSex:(long long)a1 dateOfBirth:(id)a2;
+ (id)_localizationKeyForCardioFitnessLevel:(long long)a0 keyVariant:(id)a1;
+ (id)localizationKeyForCardioFitnessLevel:(long long)a0;
+ (id)_queryCoreMotionClassificationsForBiologicalSex:(long long)a0 age:(long long)a1;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)cardioFitnessDataForBiologicalSex:(long long)a0;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)a0 inHealthStore:(id)a1;
+ (id)localizedStringForCardioFitnessLevel:(long long)a0;
+ (id)localizedStringForCardioFitnessLevelName:(long long)a0;
+ (id)localizedStringForCardioFitnessDescription:(long long)a0 age:(long long)a1;
+ (id)cardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 preferredOverlay:(long long)a2 analyticsDelegate:(id)a3;

@end
