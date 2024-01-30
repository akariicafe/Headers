@class NSArray, NSDateInterval, NSString, HKActivitySummaryDataProvider;

@interface _ActivityRemoteDataGatherer : NSObject <HKActivitySummaryDataProviderObserver>

@property (retain, nonatomic) NSDateInterval *monthDateInterval;
@property (retain, nonatomic) NSDateInterval *sixMonthDateInterval;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryProvider;
@property (retain, nonatomic) NSArray *monthActivitySummaries;
@property (retain, nonatomic) NSArray *sixMonthActivitySummaries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gatherData;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_chartDataSourceQueryDataFromSummaries:(id)a0;
- (id)_dateRangeFromInterval:(id)a0;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)a0;
- (id)initWithActivitySummaryDataProvider:(id)a0 monthDateInterval:(id)a1 sixMonthDateInterval:(id)a2 completion:(id /* block */)a3;

@end
