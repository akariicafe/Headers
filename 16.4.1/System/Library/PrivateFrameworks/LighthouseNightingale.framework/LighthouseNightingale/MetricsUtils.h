@interface MetricsUtils : NSObject

+ (id)daysSinceFactorsRemovedFromCycleFactors:(id)a0 andLastJulianDay:(long long)a1;
+ (double)getAbsErrOfPrediction:(id)a0 givenCycle:(id)a1;
+ (double)getLeftLightRedDaysFromPrediction:(id)a0;
+ (double)getMeanOfValuesInArray:(id)a0;
+ (id)getMetricsFromDayInputs:(id)a0 startingAtJulianDay:(long long)a1 andEndingAtJulianDay:(long long)a2;
+ (double)getPopulationStandardDeviationOfValuesInArray:(id)a0;
+ (double)getPredictionErrorFromHistoricalCycle:(id)a0 andPrediction:(id)a1;
+ (double)getRightLightRedDaysFromPrediction:(id)a0;
+ (id)getRollingMeanWithoutOutliers:(id)a0 minValue:(id)a1 maxValue:(id)a2;
+ (id)getRollingSDWithoutOutliers:(id)a0 minValue:(id)a1 maxValue:(id)a2;
+ (double)getWastageFromHistoricalCycle:(id)a0 andPrediction:(id)a1;
+ (long long)getWidthFromPrediction:(id)a0;

@end
