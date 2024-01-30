@class HDProfile;

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _lastVO2MaxWorkoutWasActive;
    HDProfile *_profile;
    double _nextElectrocardiogramSampleTime;
    unsigned long long _nextElectrocardiogramClassification;
    double _nextRestingHeartRateSampleTime;
    double _nextWalkingHeartRateAverageSampleTime;
    double _lastRestingHeartRate;
    double _lastWalkingHeartRateAverage;
    double _nextVO2MaxSampleTime;
    double _lastVO2MaxValue;
    double _meanVO2MaxValue;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setProfile:(id)a0 provenance:(id)a1;

@end
