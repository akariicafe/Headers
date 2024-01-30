@interface HKHeartRateVariabilityUtilities : NSObject

+ (id)_hrvType;
+ (void)queryForParentSequenceOfHRV:(id)a0 healthStore:(id)a1 completion:(id /* block */)a2;
+ (id)_sequenceType;
+ (void)deleteHRVSample:(id)a0 healthStore:(id)a1 predicate:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)deleteHRVSamplesFromStartDate:(id)a0 endDate:(id)a1 predicate:(id)a2 options:(unsigned long long)a3 healthStore:(id)a4 completion:(id /* block */)a5;
+ (id)instantaneousBPMsForHeartbeatSeriesSample:(id)a0;

@end
