@class NSString, NSUUID, NSObject;
@protocol OS_os_log, HDRegionAvailabilityProvidingDelegate, HDRegionAvailabilityDataSource, HDPairedDeviceCapabilityProviding;

@interface HDWatchAndCompanionCountryListIntersectionAvailabilityProvider : NSObject <HDRegionAvailabilityDataSourceObserver, HDObservableRegionAvailabilityProviding> {
    id<HDRegionAvailabilityDataSource> _regionAvailabilityDataSource;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    NSUUID *_featureCapability;
    NSObject<OS_os_log> *_loggingCategory;
    id<HDRegionAvailabilityProvidingDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRegionAvailabilityDataSource:(id)a0 pairedDeviceCapabilityProvider:(id)a1 featureCapability:(id)a2 loggingCategory:(id)a3;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)regionAvailability;
- (BOOL)isCountryCodeAllowed:(id)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 device:(id)a1;
- (void).cxx_destruct;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (id)regionAvailabilityForDevice:(id)a0;
- (void)regionAvailabilityDataSourceDidUpdateActiveRemoteCountrySet:(id)a0;

@end
