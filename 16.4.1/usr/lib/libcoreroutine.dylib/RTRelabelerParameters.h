@interface RTRelabelerParameters : NSObject

@property (readonly, nonatomic) double baseCount;
@property (readonly, nonatomic) double clippingRadius;
@property (readonly, nonatomic) double confidenceEqualityEpsilon;
@property (readonly, nonatomic) double confidenceThreshold;
@property (readonly, nonatomic) unsigned long long contextCandidateAmountThreshold;
@property (readonly, nonatomic) double contextDistanceThreshold;
@property (readonly, nonatomic) double minimumConfidenceRatio;
@property (readonly, nonatomic) unsigned long long minimumNumberPOIs;
@property (readonly, nonatomic) double passthroughThreshold;
@property (readonly, nonatomic) double placeholderWeight;
@property (readonly, nonatomic) double revGeoConfidence;
@property (readonly, nonatomic) double sigma;
@property (readonly, nonatomic) unsigned long long weekThreshold;

- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (id)description;
- (id)initWithBaseCount:(double)a0 clippingRadius:(double)a1 confidenceEqualityEpsilon:(double)a2 confidenceThreshold:(double)a3 contextCandidateAmountThreshold:(unsigned long long)a4 contextDistanceThreshold:(double)a5 minimumConfidenceRatio:(double)a6 minimumNumberPOIs:(unsigned long long)a7 passthroughThreshold:(double)a8 placeholderWeight:(double)a9 revGeoConfidence:(double)a10 sigma:(double)a11 weekThreshold:(unsigned long long)a12;

@end
