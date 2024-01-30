@interface HKSleepUtilities : NSObject

+ (long long)_axisPurposeForSleepSeriesType:(long long)a0;
+ (void)_applyModificationsToSleepSeries:(id)a0 sleepSeriesType:(long long)a1 sleepDisplayType:(id)a2 timeScope:(long long)a3 unitController:(id)a4 numericAxisConfigurationOverrides:(id)a5;
+ (id)_durationGoalDataForSleepDays:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
+ (id)_fillStylesFromColors:(id)a0;
+ (id)_findOrCreateSleepChartCacheForSleepDisplayType:(id)a0 cacheIdentifier:(id)a1 cacheController:(id)a2 dataSourceProvider:(id /* block */)a3;
+ (id)_generateComparisonSleepSeriesForTimeScope:(long long)a0;
+ (id)_generateDailyTimePeriodSeriesForTimeScope:(long long)a0;
+ (id)_generateDailyTimePeriodSeriesWithSchedulesForTimeScope:(long long)a0;
+ (id)_generateDurationSleepGoalSeriesForTimeScope:(long long)a0;
+ (id)_generateDurationSleepSeriesForTimeScope:(long long)a0;
+ (id)_generateSleepStageDurationSeriesForTimeScope:(long long)a0;
+ (id)_generateSleepStageSeriesForTimeScope:(long long)a0;
+ (id)_goalLineMarkerStyle;
+ (id)_goalLineStrokeStyle;
+ (id)_gradientFillColorForSleepAnalysis:(long long)a0 gradientPosition:(double)a1;
+ (id)_lessSaturatedColorWithColor:(id)a0;
+ (id)_scheduleMarkerStyleWithColor:(id)a0;
+ (id)_seriesStrokeStyle;
+ (id)_sleepSeriesAxisForSleepSeries:(id)a0 sleepSeriesType:(long long)a1 sleepDisplayType:(id)a2 unitController:(id)a3 numericAxisConfigurationOverrides:(id)a4;
+ (id)_sleepSeriesForType:(long long)a0 timeScope:(long long)a1;
+ (id)_standardRangeDataForSleepDays:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
+ (id)buildSleepChartCachesWithDisplayType:(id)a0 dataSourceProvider:(id)a1 cacheController:(id)a2 healthStore:(id)a3;
+ (id)buildSleepGraphSeriesForSleepSeriesType:(long long)a0 sleepDisplayType:(id)a1 unitController:(id)a2 numericAxisConfigurationOverrides:(id)a3 timeScope:(long long)a4;
+ (id)buildSleepGraphSeriesMappingWithSleepSeriesType:(long long)a0 sleepDisplayType:(id)a1 unitController:(id)a2 numericAxisConfigurationOverrides:(id)a3;
+ (id)durationGoalForSleepDay:(id)a0;
+ (id)fillStyleForSleepCategoryValue:(long long)a0 isActive:(BOOL)a1;
+ (id)localizedInfographicDescriptionForCategoryValue:(long long)a0;
+ (id)localizedInfographicTitleForCategoryValue:(long long)a0;
+ (id)rangeDataForSleepChartInfo:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
+ (id)sleepDaySummaryNoonAlignedXValue:(id)a0;
+ (id)sleepDaySummaryStandardXValue:(id)a0;
+ (id)sleepDisplayTypesWithHealthStore:(id)a0 sleepDisplayType:(id)a1 unitController:(id)a2 displayTypeController:(id)a3 chartCacheController:(id)a4 sleepChartFormatter:(id)a5 sleepSeriesType:(long long)a6 sleepChartCaches:(id)a7 customSleepSeries:(id)a8 isStackedChart:(BOOL)a9;
+ (id)sleepDisplayTypesWithHealthStore:(id)a0 sleepDisplayType:(id)a1 unitController:(id)a2 displayTypeController:(id)a3 chartCacheController:(id)a4 sleepChartFormatter:(id)a5 sleepSeriesType:(long long)a6 sleepChartCaches:(id)a7 customSleepSeriesMapping:(id)a8 isStackedChart:(BOOL)a9;
+ (id)sleepDurationNoDataRange;
+ (id)sleepStageContextTitleForSleepValue:(long long)a0 timeScope:(long long)a1;
+ (id)sleepStageFillStylesWithActiveSleepStage:(id)a0;
+ (id)verticalNumericalAxisWithConfigurationOverrides:(id)a0;

@end
