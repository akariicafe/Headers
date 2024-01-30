@class HKHealthStore;

@interface HKHRCardioFitnessAnalyticsClientSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HKHealthStore *_healthStore;
}

- (id)initWithHealthStore:(id)a0;
- (long long)bucketedAgeWithError:(id *)a0;
- (id)biologicalSexStringWithError:(id *)a0;
- (void).cxx_destruct;

@end
