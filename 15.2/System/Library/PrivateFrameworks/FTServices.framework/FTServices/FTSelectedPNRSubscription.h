@class NSRecursiveLock, NSString, FTSelectedPNRSubscriptionCache, CoreTelephonyClient;

@interface FTSelectedPNRSubscription : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
    NSRecursiveLock *_lock;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscriptionCache *_cache;
    BOOL _isCacheValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (void)phoneNumberAvailable:(id)a0;
- (void)_distributed_invalidateCache;
- (void)subscriptionInfoDidChange;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)a0;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)a0;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (BOOL)isDeviceInDualPhoneIdentityMode;
- (void)dualSimCapabilityDidChange;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)a0;
- (BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)a0;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)a0 activeContexts:(id)a1 fallbackProhibited:(BOOL)a2 persistUpdate:(BOOL)a3 error:(id *)a4;
- (BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)a0;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)a0;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)a0;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)a0;
- (void)activeSubscriptionsDidChange;
- (BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateCache;
- (void)phoneNumberChanged:(id)a0;
- (BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)a0;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)a0;
- (id)_reevaluateCachedSubscriptionWithError:(id *)a0;
- (void)_protected_invalidateCache;
- (void)dealloc;
- (id)selectedRegistrationPhoneNumberWithError:(id *)a0;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)a0 error:(id *)a1;
- (BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)a0 subscriptionInfo:(id)a1;
- (id)_subscriptionFromAvailableSubscriptions:(id)a0 matchingSelectedLabel:(id)a1;

@end
