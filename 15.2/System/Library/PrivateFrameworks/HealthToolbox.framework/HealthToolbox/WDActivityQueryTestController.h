@class HKActivitySummaryDataProvider, WDProfile, NSString;

@interface WDActivityQueryTestController : NSObject <HKActivitySummaryDataProviderObserver>

@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HKActivitySummaryDataProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)runTest;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)a0;
- (void).cxx_destruct;
- (void)_hourlyActivityDataForStartDate:(id)a0 endDate:(id)a1 healthStore:(id)a2 calendar:(id)a3 handler:(id /* block */)a4;
- (id)_stringForDateComponents:(id)a0;
- (id)_quantityValue:(id)a0 title:(id)a1;
- (void)_logActivitySummary:(id)a0 calendar:(id)a1;
- (id)_buildActivitySummaryFromDate:(id)a0 calendar:(id)a1 moveQuantity:(id)a2 exerciseQuantity:(id)a3 standQuantity:(id)a4;
- (id)_summariesFromStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 moveData:(id)a3 exerciseData:(id)a4 standData:(id)a5;
- (id)_dateDaysAgo:(id)a0;
- (void)_logTrialQuery;
- (void)_logDataFromTimeScope:(long long)a0 title:(id)a1;
- (void)_logDataFromAllTimeScopes;
- (id)_stringForDate:(id)a0;

@end
