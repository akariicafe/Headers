@class NSDate;

@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextEnvironmentalAudioExposureSampleTime;
@property (nonatomic) BOOL didGenerateEnvironmentalAudioExposureSamples;
@property (retain, nonatomic) NSDate *lastEnvironmentalSampleEndDate;
@property (nonatomic) double nextHeadphoneAudioExposureSampleTime;
@property (nonatomic) BOOL didGenerateHeadphoneAudioExposureSamples;
@property (retain, nonatomic) NSDate *lastHeadphoneSampleEndDate;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_makeAirPods;
- (id)_makeEarPods;
- (id)_makeBeatsHeadphones;
- (id)_makeUnknownHeadphones;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateEnvironmentalAudioExposureSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateHeadphoneAudioExposureSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)_makeNormallyDistributedAudioExposureLevelsWithCount:(unsigned long long)a0 headphones:(BOOL)a1 loudData:(BOOL)a2;
- (id)_makeEnvironmentalSamplesWithType:(id)a0 rawSampleValues:(id)a1 sampleUnit:(id)a2 initialSampleDate:(id)a3 sampleDuration:(double)a4 distanceBetweenSamples:(double)a5;
- (id)_makeQuantitySeriesSamplesWithType:(id)a0 rawSampleValues:(id)a1 sampleUnit:(id)a2 initialSampleDate:(id)a3 sampleDuration:(double)a4 distanceBetweenSamples:(double)a5 demoPerson:(id)a6;
- (id)_makeHeadphoneSamplesWithType:(id)a0 rawSampleValues:(id)a1 sampleUnit:(id)a2 initialSampleDate:(id)a3 sampleDuration:(double)a4 distanceBetweenSamples:(double)a5 demoPerson:(id)a6;
- (id)_allPossibleAudioExposureLevels;
- (id)_randomlySelectedAudioExposureLevelFromPossibleValues:(id)a0;
- (double)_randomlySelectedGaussianWithMean:(double)a0 deviation:(double)a1;
- (id)_headphoneProvenanceWithPerson:(id)a0;
- (id)_headphoneAudioExposureMetadata;
- (id)_makeQuantitySampleWithType:(id)a0 value:(id)a1 unit:(id)a2 startDate:(id)a3 endDate:(id)a4 metadata:(id)a5;
- (id)_makeAlertSampleWithStartDate:(id)a0 endDate:(id)a1 value:(id)a2 limit:(id)a3;
- (id)_dateComponentsByAddingHours:(long long)a0 toDate:(id)a1;

@end
