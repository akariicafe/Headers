@class NSMutableDictionary;

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _forcePEFR;
    NSMutableDictionary *_nextSpirometrySampleTimes;
    double _nextAsthmaAttackSampleTime;
    double _nextAsthmaAttackEndTime;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;

@end
