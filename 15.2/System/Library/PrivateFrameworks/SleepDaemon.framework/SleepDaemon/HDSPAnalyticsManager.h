@class HDSPEnvironment, HKSPAnalyticsManager, NSString;
@protocol HDSPActivityScheduler;

@interface HDSPAnalyticsManager : NSObject <HDSPEnvironmentAware, HDSPTimeChangeObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } analyticsLock;
@property (readonly, nonatomic) id<HDSPActivityScheduler> dataCollectionScheduler;
@property (readonly, nonatomic) BOOL isDataCollectionInProgress;
@property (readonly, nonatomic) HKSPAnalyticsManager *analyticsManager;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dailyCollectionActivity;

- (void)significantTimeChangeDetected:(id)a0;
- (id)currentDate;
- (void)environmentDidBecomeReady:(id)a0;
- (void)_lock_executeQuery;
- (void)scheduleDailyCollectionActivity;
- (void)environmentWillBecomeReady:(id)a0;
- (struct { long long x0; long long x1; })_queryMorningIndexRangeForDate:(id)a0;
- (void)_submitAnalyticsReportsUsingBuilder:(id)a0;
- (void).cxx_destruct;
- (void)_processQueryResultsWithSummaries:(id)a0 queryRange:(struct { long long x0; long long x1; })a1 error:(id)a2;
- (id)initWithEnvironment:(id)a0 analyticsManager:(id)a1 dataCollectionScheduler:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)_pruneExpiredWindDownActionDataBeforeQueryRange:(struct { long long x0; long long x1; })a0;
- (void)updateScheduledActivity;
- (void)_unit_testing_pruneExpiredWindDownActionData;
- (id)_makeReportQueryWithMorningIndexRange:(struct { long long x0; long long x1; })a0 resultsHandler:(id /* block */)a1;
- (void)_withLock:(id /* block */)a0;
- (BOOL)isDataCollectionEnabled;
- (void)cancelDailyCollectionActivity;

@end
