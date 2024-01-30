@class NSDate;

@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _didGenerateEnvironmentalAudioExposureSamples;
    BOOL _didGenerateHeadphoneAudioExposureSamples;
    double _nextEnvironmentalAudioExposureSampleTime;
    NSDate *_lastEnvironmentalSampleEndDate;
    double _nextHeadphoneAudioExposureSampleTime;
    NSDate *_lastHeadphoneSampleEndDate;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;

@end
