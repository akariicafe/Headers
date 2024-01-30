@class HKQuantitySample;

@interface HKHRAFibBurdenSevenDayAnalysisResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) HKQuantitySample *sampleCreated;
@property (readonly, nonatomic) BOOL onboardedWithinAnalysisInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithResult:(long long)a0 sample:(id)a1 onboardedWithinAnalysisInterval:(BOOL)a2;

@end
