@interface HKSleepUtilities : NSObject

+ (id)buildSleepGraphSeriesForSleepSeriesType:(long long)a0 sleepDisplayType:(id)a1 unitController:(id)a2;
+ (id)buildPrimarySleepCacheWithHealthStore:(id)a0 sleepDisplayType:(id)a1 sleepDataSourceProvider:(id)a2 chartCacheController:(id)a3;
+ (id)sleepDisplayTypesWithHealthStore:(id)a0 sleepDisplayType:(id)a1 unitController:(id)a2 displayTypeController:(id)a3 chartCacheController:(id)a4 sleepChartFormatter:(id)a5 sleepSeriesType:(long long)a6 sharedSleepCache:(id)a7 customSleepSeries:(id)a8;
+ (id)durationGoalForSleepDay:(id)a0;
+ (id)_goalLineStrokeStyle;
+ (id)_goalLineMarkerStyle;
+ (id)rangeDataForSleepChartInfo:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
+ (void)_applyModificationsToSleepSeries:(id)a0 sleepSeriesType:(long long)a1 sleepDisplayType:(id)a2 unitController:(id)a3;
+ (id)_sleepSeriesForType:(long long)a0;
+ (id)_sleepSeriesAxisForSleepSeriesType:(long long)a0 sleepDisplayType:(id)a1 unitController:(id)a2;
+ (long long)_axisPurposeForSleepSeriesType:(long long)a0;
+ (id)verticalNumericalAxis;
+ (id)_generateDurationSleepSeries;
+ (id)_generateDailyTimePeriodSeries;
+ (id)_generateDurationSleepGoalSeries;
+ (id)_generateDailyTimePeriodSeriesWithSchedules;
+ (id)_fillStylesFromColors:(id)a0;
+ (id)_lessSaturatedColorWithColor:(id)a0;
+ (id)_scheduleMarkerStyleWithColor:(id)a0;
+ (id)_standardRangeDataForSleepDays:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
+ (id)_durationGoalDataForSleepDays:(id)a0 valueFont:(id)a1 unitFont:(id)a2;

@end
