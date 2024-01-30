@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, HKRPUserDefaultsSyncProviding, HKFeatureAvailabilityProviding;

@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver> {
    id<HKFeatureAvailabilityProviding> _featureAvailabilityProvider;
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)initWithFeatureAvailabilityProviding:(id)a0 userDefaults:(id)a1 userDefaultsSyncProvider:(id)a2 didStart:(id /* block */)a3;
- (void)_queue_featureAvailabilityDidChange;
- (id)initWithFeatureAvailabilityProviding:(id)a0 userDefaults:(id)a1 userDefaultsSyncProvider:(id)a2;

@end
