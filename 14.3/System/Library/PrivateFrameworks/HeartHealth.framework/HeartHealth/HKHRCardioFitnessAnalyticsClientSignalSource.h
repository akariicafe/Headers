@class HKHealthStore;

@interface HKHRCardioFitnessAnalyticsClientSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HKHealthStore *_healthStore;
}

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0;
- (long long)bucketedAgeWithError:(id *)a0;
- (id)biologicalSexStringWithError:(id *)a0;

@end
