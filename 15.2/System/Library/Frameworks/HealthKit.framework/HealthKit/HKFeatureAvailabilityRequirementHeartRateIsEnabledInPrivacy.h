@interface HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (BOOL)defaultValueWhenKeyIsMissing;
- (id)init;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
