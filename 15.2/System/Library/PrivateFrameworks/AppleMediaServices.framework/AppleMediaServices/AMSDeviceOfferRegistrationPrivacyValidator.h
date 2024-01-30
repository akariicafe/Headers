@class ACAccount;

@interface AMSDeviceOfferRegistrationPrivacyValidator : NSObject

@property (readonly, nonatomic) ACAccount *account;

+ (id)_privacyVersionMap;
+ (id)_masterEligibilityPrivacyOptionsIdentifiers;
+ (id)_identifiersForValidationOptions:(unsigned long long)a0;
+ (BOOL)_isPrivacyAcknowledgementForIdentifiers:(id)a0 satisfiedOnAccount:(id)a1;
+ (id)_minimumAcknowledgementVersionForIdentifier:(id)a0;
+ (BOOL)_isPrivacyAcknowledgementForIdentifier:(id)a0 satisfiedOnAccount:(id)a1;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)canMasterDevicePerformRegistration;
- (BOOL)isPrivacyRequirementMetForOptions:(unsigned long long)a0;

@end
