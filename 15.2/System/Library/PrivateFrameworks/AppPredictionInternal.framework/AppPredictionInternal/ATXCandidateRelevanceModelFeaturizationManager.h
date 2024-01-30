@class NSArray;

@interface ATXCandidateRelevanceModelFeaturizationManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *featurizers;

+ (id)labelsFromDataPoints:(id)a0;
+ (id)denseLabelVectorFromDataPoints:(id)a0;

- (id)featureNames;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeaturizers:(id)a0;
- (id)sparseFeatureMatrixFromDataPoints:(id)a0;
- (unsigned long long)numberOfInputDimensions;
- (id)sparseFeatureVectorForContext:(id)a0 candidate:(id)a1;
- (id)featuresForContext:(id)a0 candidate:(id)a1;
- (id)initWithImmutableFeaturizers:(id)a0;
- (BOOL)isEqualToATXCandidateRelevanceModelFeaturizationManager:(id)a0;

@end
