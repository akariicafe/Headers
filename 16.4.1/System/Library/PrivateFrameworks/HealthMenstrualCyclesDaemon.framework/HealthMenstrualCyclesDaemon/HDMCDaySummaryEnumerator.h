@class HDMultiTypeSortedSampleIterator, HDProfile, HKCalendarCache;

@interface HDMCDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    struct { long long start; long long duration; } _dayIndexRange;
    HDMultiTypeSortedSampleIterator *_iterator;
    BOOL _ascending;
    HKCalendarCache *_calendarCache;
}

+ (id)daySummariesInIndexRange:(struct { long long x0; long long x1; })a0 profile:(id)a1 calendarCache:(id)a2 error:(id *)a3;
+ (id)daySummaryAtIndex:(long long)a0 profile:(id)a1 calendarCache:(id)a2 error:(id *)a3;

- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_addSample:(id)a0 toBuilders:(id)a1 atDayIndex:(long long)a2;
- (void)_addSample:(id)a0 toBuilders:(id)a1 inRange:(struct { long long x0; long long x1; })a2;
- (void)_addSample:(id)a0 toBuilders:(id)a1 sampleRange:(struct { long long x0; long long x1; })a2;
- (void)_closeBuilders:(id)a0 withIndexes:(id)a1 handler:(id /* block */)a2 stop:(BOOL *)a3;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1 dayIndexRange:(struct { long long x0; long long x1; })a2 ascending:(BOOL)a3 includeFactors:(BOOL)a4 includeWristTemperature:(BOOL)a5;

@end
