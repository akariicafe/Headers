@class NSMutableDictionary, NSDictionary, TLAccessQueue, NPSDomainAccessor;

@interface TLVibrationManager : NSObject {
    TLAccessQueue *_accessQueue;
    unsigned long long _specialBehaviors;
    NSMutableDictionary *_cachedSystemVibrationIdentifiers;
    NSMutableDictionary *_cachedSystemVibrationCompleteSubdirectories;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    NSDictionary *_synchronizedVibrationPatternFromToneIdentifierMapping;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
}

@property (class, readonly) TLVibrationManager *sharedVibrationManager;

@property (readonly, nonatomic) BOOL needsRefresh;
@property (nonatomic) BOOL allowsAutoRefresh;
@property (readonly, nonatomic) BOOL shouldVibrateForCurrentRingerSwitchState;
@property (readonly, nonatomic) BOOL shouldVibrateOnRing;
@property (readonly, nonatomic) BOOL shouldVibrateOnSilent;

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned long long)a0 atInitiativeOfVibrationManager:(id)a1;

- (id)_currentVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1 correspondingToneIdentifier:(id)a2 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)a3;
- (id)_nameOfVibrationWithIdentifier:(id)a0;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)a0 accountIdentifier:(id)a1;
- (id)_initWithSpecialBehaviors:(unsigned long long)a0;
- (id)currentVibrationIdentifierForAlertType:(long long)a0;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (id)currentVibrationPatternForAlertType:(long long)a0;
- (void)setCurrentVibrationIdentifier:(id)a0 forAlertType:(long long)a1 topic:(id)a2;
- (void)setCurrentVibrationIdentifier:(id)a0 forAlertType:(long long)a1;
- (id)addUserGeneratedVibrationPattern:(id)a0 name:(id)a1 error:(id *)a2;
- (void)_performBlockInAccessQueue:(id /* block */)a0;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)a0 error:(id *)a1;
- (id)_defaultPreferablyNonSilentVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1 correspondingToneIdentifier:(id)a2;
- (id)_systemVibrationIdentifiersForSubdirectory:(id)a0;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)a0 forAlertType:(long long)a1 topic:(id)a2;
- (id)noneVibrationPattern;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)a0 forAlertType:(long long)a1 accountIdentifier:(id)a2;
- (id)_sanitizeVibrationIdentifier:(id)a0 forAlertType:(long long)a1 topic:(id)a2 correspondingToneIdentifier:(id)a3 didFallbackToCurrentVibrationIdentifier:(BOOL *)a4;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)a0 error:(id *)a1;
- (id)_userGeneratedVibrationPatterns;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)a0;
- (id)_systemWideVibrationPatternPreferenceKeyForAlertType:(long long)a0;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)a0 topic:(id)a1;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)a0 inDomain:(id)a1 usingPreferencesOfKind:(unsigned long long)a2;
- (id)defaultVibrationIdentifierForAlertType:(long long)a0;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)a0 topic:(id)a1 didFindPersistedWatchAlertPolicy:(BOOL *)a2;
- (id)_sanitizeVibrationIdentifier:(id)a0 forAlertType:(long long)a1 topic:(id)a2 correspondingToneIdentifier:(id)a3 useDefaultVibrationAsFallback:(BOOL)a4 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)a5 didFallback:(BOOL *)a6;
- (void).cxx_destruct;
- (BOOL)hasSpecificDefaultVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)nameOfVibrationWithIdentifier:(id)a0;
- (void)setCurrentVibrationIdentifier:(id)a0 forAlertType:(long long)a1 accountIdentifier:(id)a2;
- (id)init;
- (BOOL)vibrationWithIdentifierIsValid:(id)a0;
- (id)_newServiceConnection;
- (BOOL)setName:(id)a0 forUserGeneratedVibrationWithIdentifier:(id)a1 error:(id *)a2;
- (unsigned long long)_numberOfUserGeneratedVibrations;
- (unsigned long long)_storedSystemVibrationDataMigrationVersion;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(long long)a0 topic:(id)a1;
- (BOOL)_isUnitTestingModeEnabled;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)a0;
- (BOOL)_migrateLegacySettings;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)a0 forAlertType:(long long)a1;
- (id)_patternForSystemVibrationWithIdentifier:(id)a0 shouldLogAssetPath:(BOOL)a1;
- (id)_currentVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)currentVibrationIdentifierForAlertType:(long long)a0 accountIdentifier:(id)a1;
- (BOOL)refresh;
- (id)currentVibrationNameForAlertType:(long long)a0;
- (id)noneVibrationName;
- (id)allUserGeneratedVibrationIdentifiers;
- (BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id *)a0;
- (BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)a0 error:(id *)a1;
- (BOOL)_areSynchronizedVibrationsAllowedForAlertType:(long long)a0 topic:(id)a1;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (id)defaultVibrationPatternForAlertType:(long long)a0;
- (id)_currentVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1 correspondingToneIdentifier:(id)a2;
- (void)dealloc;
- (id)_defaultVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1 correspondingToneIdentifier:(id)a2;
- (BOOL)_booleanPreferenceForKey:(struct __CFString { } *)a0 defaultValue:(BOOL)a1;
- (BOOL)_vibrationIsSettableForAlertType:(long long)a0;
- (id)patternForVibrationWithIdentifier:(id)a0 repeating:(BOOL)a1;
- (id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)a0;
- (id)_localizedNameForVibrationWithIdentifier:(id)a0;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (id)patternForVibrationWithIdentifier:(id)a0;
- (id)defaultVibrationNameForAlertType:(long long)a0;
- (id)currentVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1;
- (id)_synchronizedVibrationIdentifierForToneIdentifier:(id)a0;
- (id)defaultVibrationIdentifierForAlertType:(long long)a0 topic:(id)a1;

@end
