@class NSOrderedSet, NSDictionary, NSString, NSArray;

@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *satisfactionByRequirementIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *requirementIdentifiersOrderedByPriority;
@property (readonly, nonatomic) NSString *highestPriorityUnsatisfiedRequirement;
@property (readonly, copy, nonatomic) NSArray *unsatisfiedRequirementIdentifiers;

+ (id)evaluationOfRequirements:(id)a0 dataSource:(id)a1 overrides:(id)a2 error:(id *)a3;
+ (id)emptyEvaluation;

- (void)encodeWithCoder:(id)a0;
- (BOOL)areAllRequirementsSatisfied;
- (id)description;
- (id)initWithRequirementIdentifiersOrderedByPriority:(id)a0 satisfactionByRequirementIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyUpdatingRequirementForIdentifier:(id)a0 isSatisfied:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isRequirementSatisfiedWithIdentifier:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
