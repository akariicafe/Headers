@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {
    int _cachedAutoFillRestrictionValue;
    int _cachedPasswordAutoFillEffectiveValue;
}

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (retain, nonatomic) NSString *preferredCredentialProviderForSaving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFeatureManager;
+ (id)_syncManager;
+ (const struct __CFString { } *)autoFillPreferencesDomain;
+ (BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+ (void)autoFillPreferencesDidChange;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (BOOL)shouldAutoFillPasswords;
- (void)_refreshCachedAutoFillRestrictionValues;

@end
