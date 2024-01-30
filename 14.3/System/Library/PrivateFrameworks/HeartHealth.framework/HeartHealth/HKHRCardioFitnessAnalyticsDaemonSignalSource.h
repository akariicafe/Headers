@class HDProfile;

@interface HKHRCardioFitnessAnalyticsDaemonSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (long long)bucketedAgeWithError:(id *)a0;
- (id)biologicalSexStringWithError:(id *)a0;

@end
