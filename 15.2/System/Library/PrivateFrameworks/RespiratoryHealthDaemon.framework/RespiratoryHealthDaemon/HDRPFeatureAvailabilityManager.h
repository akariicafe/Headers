@class HDFeatureAvailabilityManager, NSString, HDProfile, NSObject;
@protocol HDPairedDeviceCapabilityProviding, OS_os_log;

@interface HDRPFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    HDFeatureAvailabilityManager *_manager;
    id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
    NSObject<OS_os_log> *_loggingCategory;
    BOOL _skipHardwareCheck;
}

@property (nonatomic) long long currentOnboardingVersion;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (id)initWithProfile:(id)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)regionAvailabilityWithError:(id *)a0;
- (void)_resetOnboarding;
- (id)initWithProfile:(id)a0 currentOnboardingVersion:(long long)a1 regionAvailabilityProvider:(id)a2 pairedDeviceCapabilityProvider:(id)a3 remoteAvailabilityProvider:(id)a4;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 regionAvailabilityProvider:(id)a3 pairedDeviceCapability:(id)a4 loggingCategory:(id)a5 skipHardwareCheck:(BOOL)a6 pairedDeviceCapabilityProvider:(id)a7 remoteAvailabilityProvider:(id)a8;
- (id)description;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;

@end
