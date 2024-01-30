@interface HKFeatureAvailabilityRequirementBloodOxygenMeasurementsAreEnabled : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (BOOL)defaultValueWhenKeyIsMissing;
- (id)init;

@end
