@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding> {
    BOOL _createdFromNSKeyedUnarchiver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HDDemoDataGenerator *demoDataGenerator;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (BOOL)createdFromNSKeyedUnarchiver;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (BOOL)_createdFromNSKeyedUnarchiver;

@end
