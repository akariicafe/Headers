@class NSString;
@protocol HDPairedDeviceCapabilityProviding, HDRegionAvailabilityProvidingDelegate, HDObservableRegionAvailabilityProviding;

@interface HDHRElectrocardiogramRecordingV1RegionAvailabilityProvider : NSObject <HDObservableRegionAvailabilityProviding> {
    id<HDObservableRegionAvailabilityProviding> _backingProvider;
    id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
}

@property (weak, nonatomic) id<HDRegionAvailabilityProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)regionAvailability;
- (id)onboardingEligibilityForCountryCode:(id)a0 device:(id)a1;
- (id)initWithRegionAvailabilityProvider:(id)a0 pairedDeviceCapabilityProvider:(id)a1;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (id)regionAvailabilityForDevice:(id)a0;
- (void).cxx_destruct;

@end
