@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {
    int _cachedAutoFillRestrictionValue;
    int _cachedPasswordAutoFillEffectiveValue;
}

@property (class, readonly) SFAutoFillFeatureManager *sharedFeatureManager;
@property (class, readonly) const struct __CFString { } *autoFillPreferencesDomain;
@property (class, readonly) BOOL defaultValueForPasswordAndCreditCardAutoFill;

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (readonly, nonatomic) BOOL shouldAutoFillPasswords;
@property (retain, nonatomic) NSString *preferredCredentialProviderForSaving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_syncManager;
+ (void)autoFillPreferencesDidChange;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)init;
- (void)_refreshCachedAutoFillRestrictionValues;

@end
