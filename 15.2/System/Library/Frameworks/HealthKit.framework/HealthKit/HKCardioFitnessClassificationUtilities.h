@interface HKCardioFitnessClassificationUtilities : NSObject

+ (id)cardioFitnessDataForBiologicalSex:(long long)a0 age:(long long)a1;
+ (id)cardioFitnessDataForLevel:(long long)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (long long)cardioFitnessLevelForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)_cardioFitnessLevels;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)_stubbedCardioFitnessLevelData;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)a0 healthStore:(id)a1;
+ (id)_parseCoreMotionClassificationData:(id)a0;
+ (id)cardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)cardioFitnessPropertiesForDate:(id)a0 healthStore:(id)a1;
+ (id)cardioFitnessDataForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)_queryCoreMotionClassifications;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)a0 inHealthStore:(id)a1;
+ (id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)a0 biologicalSex:(long long)a1 dateOfBirth:(id)a2;
+ (id)analyticsStringForLevel:(long long)a0;
+ (id)_flattenedThresholdsForLevelData:(id)a0;
+ (id)cardioFitnessDataForLevel:(long long)a0 date:(id)a1 healthStore:(id)a2;
+ (id)_queryCoreMotionClassificationsForBiologicalSex:(long long)a0 age:(long long)a1;

@end
