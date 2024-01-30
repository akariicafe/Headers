@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL createdFromNSKeyedUnarchiver;
@property (weak, nonatomic) HDDemoDataGenerator *demoDataGenerator;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (BOOL)_createdFromNSKeyedUnarchiver;

@end
