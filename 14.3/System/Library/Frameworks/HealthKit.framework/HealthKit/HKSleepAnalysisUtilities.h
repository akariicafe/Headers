@interface HKSleepAnalysisUtilities : NSObject

+ (void)categorizeSleepPeriods:(id)a0 dateInterval:(id)a1 calendar:(id)a2;
+ (id)sleepAnalysisForSleepDays:(id)a0;
+ (id)sleepPeriodsFromSamples:(id)a0 calendar:(id)a1;
+ (id)filterSleepPeriods:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)filterSleepDays:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)dateIntervalBoundingSleepPeriods:(id)a0;
+ (id)sleepDaysFromQueryResult:(id)a0 calendar:(id)a1 startOfDayTransform:(id /* block */)a2 orderedSources:(id)a3;
+ (id)sleepAnalysisIntervalForStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 stratOfDayTransform:(id /* block */)a3;
+ (id)boundingDateIntervalsForDateIntervals:(id)a0;
+ (id)filterSleepSamples:(id)a0 categoryValue:(long long)a1;
+ (double)_durationFromDateIntervals:(id)a0;
+ (id)sleepPeriodSegmentsFromSleepSamples:(id)a0 minimumInterSegmentTimeInterval:(double)a1 categoryValue:(long long)a2;
+ (id)_samplesBySourceForSamples:(id)a0;
+ (void)_enumerateSleepPeriodsForAnalysis:(id)a0 calendar:(id)a1 dateInterval:(id)a2 dateComponents:(id)a3 analysisBlock:(id /* block */)a4;
+ (id)sortedSleepPeriodSegmentsFromSleepSamples:(id)a0;
+ (id)_periodsBySourceForSamples:(id)a0 calendar:(id)a1;
+ (id)_aggregatedPeriodsForPeriodsBySource:(id)a0 orderedSources:(id)a1;

@end
