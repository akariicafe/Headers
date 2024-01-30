@interface _DPPrioPlusPlusAlgorithm : NSObject

@property (readonly, nonatomic) double sigma;
@property (readonly, nonatomic) double secretSharingSigma;
@property (readonly, nonatomic) unsigned long long dimension;

+ (id)initializeWithSigma:(double)a0 secretSharingSigma:(double)a1 dimensionality:(unsigned long long)a2;

- (id)initWithSigma:(double)a0 secretSharingSigma:(double)a1 dimensionality:(unsigned long long)a2;
- (id)randomize:(id)a0;

@end
