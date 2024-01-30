@class HDProfile;

@interface HDHRCardioFitnessAnalyticsSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HDProfile *_profile;
}

- (id)_latestCardioFitnessValueWithError:(id *)a0;
- (id)initWithProfile:(id)a0;
- (long long)bucketedAgeWithError:(id *)a0;
- (long long)_biologicalSexWithError:(id *)a0;
- (id)_birthDateComponentsWithError:(id *)a0;
- (id)_classificationStringForCardioFitnessValue:(double)a0 age:(long long)a1 biologicalSex:(long long)a2;
- (id)biologicalSexStringWithError:(id *)a0;
- (id)latestClassificationWithIsOnboarded:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
