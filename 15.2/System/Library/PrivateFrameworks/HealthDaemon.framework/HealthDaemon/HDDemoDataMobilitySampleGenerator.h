@class HDProfile;

@interface HDDemoDataMobilitySampleGenerator : HDDemoDataBaseSampleGenerator {
    HDProfile *_profile;
    double _nextStepLengthSampleTime;
    double _nextWalkingSpeedSampleTime;
    double _nextAsymmetryPercentageSampleTime;
    double _nextDoubleSupportPercentageSampleTime;
    double _nextSixMinuteWalkTestDistanceSampleTime;
    double _nextStairAscentSpeedSampleTime;
    double _nextStairDescentSpeedSampleTime;
    double _nextWalkingSteadinessSampleTime;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setProfile:(id)a0 provenance:(id)a1;

@end
