@interface HealthKitDataUtils : NSObject

+ (void)addCycleFactors:(id)a0 intoPhaseIngestor:(id)a1 withLastDay:(long long)a2;
+ (void)asynchronouslyLoadCycleFactorsIntoDictionary:(id)a0 FromHKHealthStore:(id)a1 upToLastDay:(long long)a2 withAdditionalDayCount:(long long)a3 withDispatchGroup:(id)a4 withError:(id *)a5;
+ (void)asynchronouslyLoadDayInputsIntoArray:(id *)a0 fromHealthStore:(id)a1 upToJulianDay:(long long)a2 withAdditionalDayCount:(long long)a3 useHeartRate:(BOOL)a4 useWristTemperature:(BOOL)a5 withDispatchGroup:(id)a6 error:(id *)a7;
+ (void)asynchronouslyLoadDaySummaryDayInputsIntoDictionary:(id)a0 FromHealthStore:(id)a1 upToJulianDay:(long long)a2 withAdditionalDayCount:(long long)a3 includeWristTemperature:(BOOL)a4 withDispatchGroup:(id)a5 error:(id *)a6;
+ (void)asynchronouslyLoadHeartRateDayInputsIntoDictionary:(id)a0 fromHealthStore:(id)a1 upToJulianDay:(long long)a2 withAdditionalDayCount:(long long)a3 withDispatchGroup:(id)a4 error:(id *)a5;
+ (void)asynchronouslyLoadMostRecentBMIIntoNSNumber:(id *)a0 FromHKHealthStore:(id)a1 asOfJulianDay:(long long)a2 withDispatchGroup:(id)a3 withError:(id *)a4;
+ (id)fuseDayInputsFromDaySummary:(id)a0 heartRate:(id)a1;
+ (id)getBirthDateFromHKHealthStore:(id)a0 withError:(id *)a1;
+ (id)getConsolidatedSleepHoursFromSleepSamples:(id)a0;
+ (id)getDayStreamProcessorConfigFromConfig:(id)a0 andLastJulianDay:(long long)a1;
+ (id)getDayStreamProcessorConfigFromHKHealthStore:(id)a0 asOfJulianDay:(long long)a1 withError:(id *)a2;
+ (id)getHKMCAnalysisWithHKHealthStore:(id)a0 error:(id *)a1;
+ (id)getHKMCDaySummaryWithHKHealthStore:(id)a0 forDayIndexRange:(struct { long long x0; long long x1; })a1 error:(id *)a2;
+ (id)getHistoricalCyclesFromDayInputs:(id)a0 andCycleFactors:(id)a1 upToJulianDay:(long long)a2 WithError:(id *)a3;
+ (id)getMenstruationPredictionsFromDayInputs:(id)a0 andDayStreamProcessorConfig:(id)a1 andCycleFactors:(id)a2 asOfJulianDay:(long long)a3 includingHeartRate:(BOOL)a4 includingWristTemperature:(BOOL)a5 withError:(id *)a6;
+ (id)getPercentile:(long long)a0 valueFromArray:(id)a1;
+ (id)getReducedDayInputsFromFullInputs:(id)a0 includingHeartRate:(BOOL)a1 includingWristTemperature:(BOOL)a2 upToJulianDay:(long long)a3;
+ (id)reduceCycleFactors:(id)a0 withLastJulianDay:(long long)a1;
+ (id)removeForwardLookingValuesFromDayInputs:(id)a0;

@end
