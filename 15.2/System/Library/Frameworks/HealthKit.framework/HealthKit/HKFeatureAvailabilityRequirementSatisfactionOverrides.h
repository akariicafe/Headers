@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1;
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)a0 isSatisfied:(id)a1;
- (void).cxx_destruct;
- (void)resetAllRequirementSatisfactionOverrides;
- (id)overriddenRequirementIdentifiers;

@end
