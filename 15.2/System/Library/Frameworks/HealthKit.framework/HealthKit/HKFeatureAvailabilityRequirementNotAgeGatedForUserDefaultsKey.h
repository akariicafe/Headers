@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (BOOL)defaultValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)initWithUserDefaultsKey:(id)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
