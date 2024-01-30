@class HDAssertion, HDProfile, HKCalendarCache;

@interface HDMCHeartStatisticsEnumerator : NSObject {
    HDProfile *_profile;
    struct { long long start; long long duration; } _dayIndexRange;
    HKCalendarCache *_calendarCache;
    HDAssertion *_databaseAccessibilityAssertion;
}

- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_asleepSleepAnalysisDateIntervalTreeOnDayIndex:(long long)a0 calendar:(id)a1 error:(id *)a2;
- (id)_cachingSessionWithCalendar:(id)a0 error:(id *)a1;
- (id)_heartStatisticsForDayIndex:(long long)a0 calendar:(id)a1 errorOut:(id *)a2;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1 dayIndexRange:(struct { long long x0; long long x1; })a2 databaseAccessibilityAssertion:(id)a3;

@end
