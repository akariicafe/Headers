@class NSString, NSObject;
@protocol HKFeatureAvailabilityCacheProviding, OS_os_log, HKFeatureAvailabilityProviding;

@interface HKFeatureAvailabilityDatabaseInaccessibilityCache : NSObject <HKFeatureAvailabilityProviding> {
    id<HKFeatureAvailabilityProviding> _featureAvailabilityProviding;
    id<HKFeatureAvailabilityCacheProviding> _cacheProviding;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
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
- (id)description;
- (id)_namespacedKeyForKey:(id)a0;
- (void)_setCachedObject:(id)a0 forKey:(id)a1;
- (id)_processResult:(id)a0 resultType:(Class)a1 error:(id)a2 cacheKey:(id)a3;
- (id)_cachedObjectForKey:(id)a0;
- (id)_processNumber:(id)a0 error:(id)a1 cacheKey:(id)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 backedByCache:(id)a1 loggingCategory:(id)a2;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;

@end
