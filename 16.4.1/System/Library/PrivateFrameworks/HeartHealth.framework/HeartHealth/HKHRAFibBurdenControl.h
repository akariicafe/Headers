@class NSString, HKTaskServerProxyProvider;

@interface HKHRAFibBurdenControl : NSObject <_HKXPCExportable, HKHRAFibBurdenControlClient> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)queryEligibleTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)triggerAnalysis;
- (void)addTachogramClassificationForSampleUUID:(id)a0 hasAFib:(BOOL)a1 completion:(id /* block */)a2;
- (void)addTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 chanceOfAFib:(id)a2 chanceOfWrite:(id)a3 minutesBetweenSamples:(id)a4 startingHour:(id)a5 endingHour:(id)a6 completion:(id /* block */)a7;
- (void)deleteAllTachogramClassificationsWithCompletion:(id /* block */)a0;
- (void)deleteTachogramClassificationForSampleUUID:(id)a0 completion:(id /* block */)a1;
- (id)determineIfAnalysisCanRunWithFeatureStatus:(id)a0 error:(id *)a1;
- (void)determineMajorityTimeZoneForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 completion:(id /* block */)a2;
- (id)performAnalysisForWeekContainingDayIndex:(long long)a0 error:(id *)a1;
- (void)queryAllTachogramClassificationsWithCompletion:(id /* block */)a0;
- (void)queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)a0 completion:(id /* block */)a1;
- (void)queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)a0 completion:(id /* block */)a1;
- (void)queryTachogramClassificationForSampleUUID:(id)a0 completion:(id /* block */)a1;

@end
