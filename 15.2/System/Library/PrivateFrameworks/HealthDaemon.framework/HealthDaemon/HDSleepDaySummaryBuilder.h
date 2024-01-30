@class NSMutableArray, HKCalendarCache, NSDateInterval;

@interface HDSleepDaySummaryBuilder : NSObject {
    NSDateInterval *_dateInterval;
    unsigned long long _weekday;
    HKCalendarCache *_calendarCache;
    NSMutableArray *_sleepAnalysisSamples;
    NSMutableArray *_sleepScheduleSamples;
    NSMutableArray *_sleepDurationGoalSamples;
}

@property (readonly, nonatomic) long long morningIndex;

- (void).cxx_destruct;
- (id)createDaySummary;
- (id)initWithMorningIndex:(long long)a0 weekday:(unsigned long long)a1 calendarCache:(id)a2;
- (void)addOrderedSample:(id)a0;

@end
