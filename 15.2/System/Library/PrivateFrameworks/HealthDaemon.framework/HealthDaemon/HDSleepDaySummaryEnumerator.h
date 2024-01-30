@class HDMultiTypeSortedSampleIterator, NSString, HDProfile, NSMutableDictionary, HKQuantitySample, NSDateInterval, HKCalendarCache;

@interface HDSleepDaySummaryEnumerator : NSObject {
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
- (id)initWithProfile:(id)a0 calendarCache:(id)a1 morningIndexRange:(struct { long long x0; long long x1; })a2 ascending:(BOOL)a3 requireSleepAnalysis:(BOOL)a4 onlySleepAnalysis:(BOOL)a5 debugIdentifier:(id)a6;
- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;

@end
