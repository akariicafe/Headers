@class HDSPEnvironment, NSArray;

@interface HDSPAnalyticsDailyReportBuilder : NSObject

@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSArray *daySummaries;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;

+ (unsigned long long)_stageDurationPercentage:(double)a0 ofTotalDuration:(double)a1;

- (id)healthStore;
- (id)currentDate;
- (id)sleepSchedule;
- (id)analyticsManager;
- (id)analyticsStore;
- (id)sleepSettings;
- (void).cxx_destruct;
- (id)_biologicalSex;
- (double)_bucketedSleepDurationLastNight;
- (id)_windDownEvents;
- (BOOL)_changedSchedule:(id)a0 withinNumberOfDays:(unsigned long long)a1 currentDate:(id)a2 calendar:(id)a3;
- (id)_dailyReportEvent;
- (long long)_daysWatchWornToSleepOverLastNumberOfDays:(long long)a0 excludeWeekdays:(BOOL)a1 calendar:(id)a2;
- (BOOL)_didInteractWithWindDownActionsWithinLastTwoDays;
- (double)_lastNightsDurationForSleepStage:(long long)a0;
- (double)_sleepDurationLastNightIncludingAwake:(BOOL)a0;
- (id)_userAgeForCurrentDate:(id)a0;
- (id)_weeksSinceOnboardDate:(id)a0 currentDate:(id)a1 calendar:(id)a2;
- (BOOL)_woreWatchToSleepLastNight;
- (id)buildReports;
- (id)initWithEnvironment:(id)a0 daySummaries:(id)a1 morningIndexRange:(struct { long long x0; long long x1; })a2;

@end
