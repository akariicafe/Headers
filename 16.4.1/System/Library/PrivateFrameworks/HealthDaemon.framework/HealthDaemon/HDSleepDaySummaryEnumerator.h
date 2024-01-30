@class HKQuantitySample, HDSampleAggregateCachingSession, HDProfile, NSString, NSMutableDictionary, HKCalendarCache;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDSleepDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    HDSampleAggregateCachingSession *_cachingSession;
    HKCalendarCache *_calendarCache;
    struct { long long start; long long duration; } _morningIndexRange;
    BOOL _ascending;
    unsigned long long _options;
    NSString *_debugIdentifier;
    NSMutableDictionary *_schedulesByWeekday;
    HKQuantitySample *_sleepDurationGoalSample;
    long long _cachedFirstDayOfWeek;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

+ (id)sleepAnalysisQueryDescriptorForDateInterval:(id)a0 options:(unsigned long long)a1;
+ (id)sleepTypesQueryDescriptorsForDateInterval:(id)a0 options:(unsigned long long)a1;

- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 cachingSession:(id)a1 calendarCache:(id)a2 morningIndexRange:(struct { long long x0; long long x1; })a3 ascending:(BOOL)a4 options:(unsigned long long)a5 debugIdentifier:(id)a6;

@end
