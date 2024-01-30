@class NSString, NSObject;
@protocol HKFeatureAvailabilityCacheProviding, OS_os_log, HKFeatureAvailabilityProviding;

@interface HKFeatureAvailabilityDatabaseInaccessibilityCache : NSObject <HKFeatureAvailabilityProviding> {
    id<HKFeatureAvailabilityProviding> _featureAvailabilityProviding;
    id<HKFeatureAvailabilityCacheProviding> _cacheProviding;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)onboardedCountryCodeSupportedStateForDevice:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (void).cxx_destruct;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)_namespacedKeyForKey:(id)a0;
- (id)_processResult:(id)a0 resultType:(Class)a1 error:(id)a2 cacheKey:(id)a3;
- (void)_setCachedObject:(id)a0 forKey:(id)a1;
- (id)_cachedObjectForKey:(id)a0;
- (id)_processNumber:(id)a0 error:(id)a1 cacheKey:(id)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 backedByCache:(id)a1 loggingCategory:(id)a2;
- (id)description;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)a0 error:(id *)a1;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;

@end
