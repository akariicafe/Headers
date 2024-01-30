@class HDSPEnvironment, NSArray;

@interface HDSPAnalyticsDailyReportBuilder : NSObject

@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSArray *daySummaries;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;

- (id)healthStore;
- (id)sleepSettings;
- (id)sleepSchedule;
- (id)currentDate;
- (id)_biologicalSex;
- (id)analyticsManager;
- (id)analyticsStore;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 daySummaries:(id)a1 morningIndexRange:(struct { long long x0; long long x1; })a2;
- (id)buildReports;
- (id)_dailyReportEvent;
- (id)_windDownEvents;
- (id)_userAgeForCurrentDate:(id)a0;
- (id)_weeksSinceOnboardDate:(id)a0 currentDate:(id)a1 calendar:(id)a2;
- (BOOL)_didInteractWithWindDownActionsWithinLastTwoDays;
- (BOOL)_changedSchedule:(id)a0 withinNumberOfDays:(unsigned long long)a1 currentDate:(id)a2 calendar:(id)a3;
- (id)_daysWhereUserWoreWatchToSleepOverLastSevenDaysWithCalendar:(id)a0;
- (BOOL)_woreWatchToSleepLastNight;

@end
