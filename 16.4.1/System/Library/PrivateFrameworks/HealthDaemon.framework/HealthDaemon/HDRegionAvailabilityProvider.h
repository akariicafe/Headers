@class NSString, HKRegionAvailability;

@interface HDRegionAvailabilityProvider : NSObject <HDRegionAvailabilityProviding> {
    HKRegionAvailability *_regionAvailability;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anyCountryAvailability;
+ (id)uncheckedAvailability;

- (id)regionAvailability;
- (id)onboardingEligibilityForCountryCode:(id)a0 device:(id)a1;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (id)regionAvailabilityForDevice:(id)a0;
- (void).cxx_destruct;

@end
