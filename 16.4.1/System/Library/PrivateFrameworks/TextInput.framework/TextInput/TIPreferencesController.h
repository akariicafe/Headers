@class TIActionWhenIdle, NSArray, NSString, NSMutableDictionary, NSTimer;

@interface TIPreferencesController : NSObject <TIPreferencesControllerActions> {
    NSMutableDictionary *_configuredDomains;
    NSMutableDictionary *_configuredPreferences;
    NSMutableDictionary *_cachedMCRestrictedValue;
    NSTimer *_synchronizePreferencesTimer;
}

@property (retain, nonatomic) TIActionWhenIdle *actionWhenIdle;
@property (nonatomic) BOOL ignoreNextSyncNotification;
@property (nonatomic) BOOL isInternalInstall;
@property (nonatomic) BOOL inhibitGlobalNotification;
@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) BOOL predictionEnabled;
@property (nonatomic) BOOL automaticMinimizationEnabled;
@property (nonatomic) BOOL keyboardShownByTouch;
@property (nonatomic) struct CGPoint { double x0; double x1; } keyboardPosition;
@property (nonatomic) struct CGPoint { double x0; double x1; } floatingKeyboardPosition;
@property (nonatomic) unsigned long long floatingKeyboardDockedEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPreferredLanguagesForInputModes:(id)a0 replacingInputModes:(id)a1;
+ (id)sharedPreferencesController;

- (BOOL)isPreferenceKeyLockedDown:(id)a0;
- (BOOL)allEnabledInputModesAreValid;
- (BOOL)_isOneTimeAction:(id)a0;
- (void)managedKeyboardSettingDidChange:(id)a0;
- (void)performWithWriteability:(BOOL)a0 operations:(id /* block */)a1;
- (void)setValue:(id)a0 forKey:(int)a1;
- (void)updateCompactAssistantBarPersistentLocation:(unsigned long long)a0;
- (void)_configureKey:(id)a0 domain:(id)a1 defaultValue:(id)a2;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)_configureKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3 isAnalyzed:(BOOL)a4 isCloudSetting:(BOOL)a5;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (BOOL)boolForKey:(int)a0;
- (void)updateEnabledDictationLanguages:(id)a0;
- (void)_configureKey:(id)a0 domain:(id)a1 fallbackKey:(id)a2;
- (void)setValue:(id)a0 forManagedPreferenceKey:(id)a1;
- (void)_pushValue:(id)a0 toPreference:(id)a1 domain:(id)a2;
- (void)synchronizePreferences;
- (void)preferencesChangedCallback:(id)a0;
- (void)didTriggerOneTimeAction:(id)a0;
- (void)updateKeyboardHandBias:(id)a0;
- (void)updateLastUsedDictationLanguages:(id)a0;
- (void)updateLastUsedKeyboards:(id)a0;
- (void)updateDictationAutoPunctuation:(id)a0;
- (void)updateDictationTipLastShownDate:(id)a0;
- (id)valueForPreferenceKey:(id)a0;
- (void)updateVisceral:(id)a0;
- (void)_configureDomains;
- (id)valueForKey:(int)a0;
- (void)touchSynchronizePreferencesTimer;
- (void)_configureKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3 isAnalyzed:(BOOL)a4;
- (void)updateKeyboardIsFloating:(BOOL)a0;
- (void)dealloc;
- (BOOL)oneTimeActionCompleted:(id)a0;
- (void)_configureKeyForAnalytics:(id)a0 domain:(id)a1 defaultValue:(id)a2;
- (int)MCValueForManagedPreferenceKey:(id)a0;
- (void)updateInputModes:(id)a0;
- (id)_configuredPreferencesForDomain:(id)a0;
- (void)updateLastUsedLayout:(id)a0;
- (void)_configureKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3;
- (void)updateEnableProKeyboard:(BOOL)a0;
- (void)updateKeyboardIsSplit:(BOOL)a0 locked:(BOOL)a1;
- (id)init;
- (void)resetDictationTipsToDefaultSettings;
- (void)clearSynchronizePreferencesTimer;
- (void)didUnseeHardwareKeyboard:(id)a0;
- (void)didSeeHardwareKeyboard:(id)a0;
- (void)_configureKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 isCloudSetting:(BOOL)a3;
- (BOOL)isKeyLockedDown:(int)a0;
- (void)_configureKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3 isAnalyzed:(BOOL)a4 isCloudSetting:(BOOL)a5 isWatchSync:(BOOL)a6;
- (void)updateDictationTipDisplayCount:(id)a0 dictationTipKey:(id)a1;
- (void)synchronizeDomainIfNeedsGet:(id)a0;
- (void)_configureDomain:(id)a0 notification:(id)a1;
- (void).cxx_destruct;
- (void)idleInit;
- (void)updateLastUsedInputMode:(id)a0;
- (void)profileSettingDidChange:(id)a0;
- (BOOL)boolForPreferenceKey:(id)a0;
- (void)_configurePreferences;
- (void)_configureKey:(id)a0 domain:(id)a1 fallbackKey:(id)a2 isCloudSetting:(BOOL)a3;

@end
