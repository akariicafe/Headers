@class NSArray;

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> { unsigned int __x_; } _generator;
    struct normal_distribution<double> { struct param_type { double __mean_; double __stddev_; } __p_; double _V_; BOOL _V_hot_; } _distribution;
    NSArray *_pseudoRandomDoubles;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)setupWithDemoDataGenerator:(id)a0;
- (double)pseudoRandomDoubleFromTime:(double)a0;
- (double)computeNoiseFromTime:(double)a0 stdDev:(double)a1;
- (double)computeStatisticalTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (double)randomDoubleFromGenerator;
- (id)_pseudoRandomDoubles;

@end
