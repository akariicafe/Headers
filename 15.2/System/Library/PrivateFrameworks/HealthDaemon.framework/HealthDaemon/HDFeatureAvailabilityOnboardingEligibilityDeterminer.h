@class NSString, NSUUID, NSObject;
@protocol HDPairedFeatureAttributesProviding, HDRemoteFeatureAvailabilityProviding, OS_os_log, HDRegionAvailabilityProviding, HDPairedDeviceCapabilityProviding;

@interface HDFeatureAvailabilityOnboardingEligibilityDeterminer : NSObject {
    NSString *_featureIdentifier;
    NSUUID *_pairedDeviceCapability;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    id<HDPairedFeatureAttributesProviding> _pairedFeatureAttributesProvider;
    id<HDRegionAvailabilityProviding> _regionAvailabilityProvider;
    id<HDRemoteFeatureAvailabilityProviding> _remoteAvailabilityProvider;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (nonatomic) long long currentOnboardingVersion;

- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 currentOnboardingVersion:(long long)a1 pairedDeviceCapability:(id)a2 pairedDeviceCapabilityProvider:(id)a3 regionAvailabilityProvider:(id)a4 remoteAvailabilityProvider:(id)a5 loggingCategory:(id)a6;
- (id)onboardingEligibilitiesForOnboardingCompletions:(id)a0 error:(id *)a1;
- (id)_onboardingEligibilityForRegionEligibility:(id)a0 rescindedStatus:(id)a1 isCapabilitySupported:(id)a2;
- (id)_onboardingEligibilitiesForOnboardingCompletions:(id)a0 onboardingEligbilityRetrievalBlock:(id /* block */)a1 error:(id *)a2;
- (id)onboardingEligibilityForDevice:(id)a0 countryCode:(id)a1 error:(id *)a2;
- (id)onboardingEligibilitiesForDevice:(id)a0 onboardingCompletions:(id)a1 error:(id *)a2;

@end
