@class HDMultiTypeSortedSampleIterator, NSString, HDProfile, NSMutableDictionary, HKQuantitySample, NSDateInterval, HKCalendarCache;

@interface HDSHSleepDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    HKCalendarCache *_calendarCache;
    struct { long long start; long long duration; } _morningIndexRange;
    BOOL _ascending;
    BOOL _requireSleepAnalysis;
    BOOL _onlySleepAnalysis;
    NSString *_debugIdentifier;
    HDMultiTypeSortedSampleIterator *_iterator;
    NSMutableDictionary *_schedulesByWeekday;
    HKQuantitySample *_sleepDurationGoalSample;
    NSDateInterval *_rangeDateInterval;
    long long _cachedFirstDayOfWeek;
}

+ (id)daySummaryAtMorningIndex:(long long)a0 requireSleepAnalysis:(BOOL)a1 onlySleepAnalysis:(BOOL)a2 calendarCache:(id)a3 profile:(id)a4 error:(id *)a5;
+ (id)daySummariesInMorningIndexRange:(struct { long long x0; long long x1; })a0 requireSleepAnalysis:(BOOL)a1 onlySleepAnalysis:(BOOL)a2 calendarCache:(id)a3 profile:(id)a4 error:(id *)a5;

- (void).cxx_destruct;
- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (void)_addSample:(id)a0 toBuilders:(id)a1 inRange:(struct { long long x0; long long x1; })a2;
- (void)_processEnumeratedSample:(id)a0 buildersByIndex:(id)a1 nextIndexToClose:(long long *)a2 finalIndexWithAnySample:(long long *)a3 currentCalendar:(id)a4 handler:(id /* block */)a5 stop:(BOOL *)a6;
- (void)_closeBuilders:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2 handler:(id /* block */)a3 stop:(BOOL *)a4;
- (id)_updatedBuilderForMorningIndex:(long long)a0 fromBuilders:(id)a1 createIfNeeded:(BOOL)a2;
- (unsigned long long)_weekdayForMorningIndex:(long long)a0;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1 morningIndexRange:(struct { long long x0; long long x1; })a2 ascending:(BOOL)a3 requireSleepAnalysis:(BOOL)a4 onlySleepAnalysis:(BOOL)a5 debugIdentifier:(id)a6;
- (id)_indexSetFromIndex:(long long)a0 toIndex:(long long)a1 ascending:(BOOL)a2;

@end
