@class NSArray;

@interface ATXImmutableCandidateRelevanceModelFeaturizer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *featureValueNames;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)dimensions;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (BOOL)isEqualToATXImmutableCandidateRelevanceModelFeaturizer:(id)a0;
- (id)initWithFeatureValueNames:(id)a0;

@end
