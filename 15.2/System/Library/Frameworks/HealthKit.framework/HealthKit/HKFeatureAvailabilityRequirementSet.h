@class NSDictionary;

@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *requirementsByContext;

+ (id)noRequirements;

- (id)allRequirements;
- (void)encodeWithCoder:(id)a0;
- (id)allObservableRequirements;
- (id)allRequirementIdentifiers;
- (id)evaluationByContextWithDataSource:(id)a0 overrides:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequirementsByContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)evaluationForContext:(id)a0 dataSource:(id)a1 overrides:(id)a2 error:(id *)a3;
- (unsigned long long)hash;

@end
