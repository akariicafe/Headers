@interface _DPPrioPlusPlusMetricsAlgorithm : NSObject

@property (readonly, nonatomic) double secretSharingSigma;
@property (readonly, nonatomic) unsigned long long dimension;

+ (id)initializeWithSecretSharingSigma:(double)a0 dimensionality:(unsigned long long)a1;

- (id)initWithSecretSharingSigma:(double)a0 dimensionality:(unsigned long long)a1;
- (id)randomize:(id)a0;

@end
