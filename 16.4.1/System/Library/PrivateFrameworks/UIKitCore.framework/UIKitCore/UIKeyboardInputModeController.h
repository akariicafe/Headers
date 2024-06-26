@class NSArray, NSString, UIKeyboardInputMode, NSDate, UITextInputMode, NSObject;
@protocol UIKeyboardInputModeControllerDelegate;

@interface UIKeyboardInputModeController : NSObject {
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    BOOL _skipExtensionInputModes;
    BOOL _excludeExtensionInputModes;
    BOOL _cacheNeedsRefresh;
    int _notifyPasscodeChangedToken;
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userNotificationRunLoopSource;
    NSString *_newModeForUserNotification;
    NSObject *_keyboardTagForUserNotification;
    BOOL _suppressCurrentPublicInputMode;
}

@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (readonly) NSArray *inputModesWithoutHardwareSupport;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property (readonly) NSArray *enabledInputModeLanguages;
@property (readonly) NSArray *activeInputModeIdentifiers;
@property (readonly) NSArray *activeUserSelectableInputModeIdentifiers;
@property (readonly, nonatomic) NSArray *allowedExtensions;
@property (retain) NSArray *keyboardInputModes;
@property (retain) NSArray *userSelectableKeyboardInputModes;
@property (retain) NSArray *keyboardInputModeIdentifiers;
@property (retain) NSArray *userSelectableKeyboardInputModeIdentifiers;
@property (retain) NSArray *enabledInputModes;
@property (retain) NSArray *normalizedInputModes;
@property (retain) NSArray *defaultKeyboardInputModes;
@property (copy, nonatomic) NSArray *defaultRawInputModes;
@property (retain) NSArray *defaultInputModes;
@property (retain) NSArray *defaultNormalizedInputModes;
@property (retain) NSArray *suggestedInputModesForSiriLanguage;
@property (retain, nonatomic) UIKeyboardInputMode *nextInputModeToUse;
@property (retain, nonatomic) UIKeyboardInputMode *currentUsedInputMode;
@property (retain, nonatomic) id extensionMatchingContext;
@property (nonatomic) BOOL delegateImplementsDictationHandlingMethods;
@property (nonatomic) BOOL delegateImplementsLegacyDictationHandlingMethods;
@property (retain) UIKeyboardInputMode *currentInputMode;
@property (weak, nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property (retain, nonatomic) UITextInputMode *documentInputMode;
@property (retain, nonatomic) UIKeyboardInputMode *lastUsedInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *hardwareInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentSystemInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentLinguisticInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *lastUsedInputModeForCurrentContext;
@property (readonly, nonatomic) BOOL containsEmojiInputMode;
@property (readonly, nonatomic) BOOL containsDictationSupportedInputMode;
@property (readonly, nonatomic) NSArray *activeDictationSupportedInputModeIdentifiers;
@property (readonly, nonatomic) NSArray *activeDictationLanguages;
@property (readonly, nonatomic) NSArray *enabledDictationLanguages;
@property (copy, nonatomic) NSString *inputModeContextIdentifier;
@property (copy, nonatomic) NSArray *additionalTextInputLocales;
@property (nonatomic) BOOL shouldRunContinuousDiscovery;
@property (retain, nonatomic) NSDate *defaultsLastChangedDate;
@property (weak, nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;
@property (nonatomic) BOOL disableFloatingKeyboardFilter;
@property (nonatomic) BOOL disablesUpdateLastUsedInputModeTimer;
@property (nonatomic) BOOL lastInputModeSwitchTriggeredByASCIIToggle;

+ (BOOL)dictationInputModeIsFunctional;
+ (id)inputModeIdentifierForPreferredLanguages:(id)a0 passingTest:(id /* block */)a1;
+ (id)sharedInputModeController;
+ (id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+ (id)disallowedDictationLanguagesForDeviceLanguage;
+ (BOOL)shouldShowDictationMic;

- (id)activeInputModes;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)suggestedInputModesForHardwareKeyboardLanguage:(id)a0 countryCode:(id)a1 inputModes:(id)a2;
- (id)nextInputModeInPreferenceListForTraits:(id)a0 updatePreference:(BOOL)a1 skipEmoji:(BOOL)a2;
- (BOOL)identifierIsValidSystemInputMode:(id)a0;
- (id)_allExtensionsFromMatchingExtensions:(id)a0;
- (BOOL)currentLocaleRequiresExtendedSetup;
- (id)inputModeIdentifierLastUsedForLanguage:(id)a0;
- (id)inputModeLastUsedForLanguage:(id)a0 includingExtensions:(BOOL)a1;
- (void)_removeInputModes:(id)a0;
- (void)clearNextInputModeToUse;
- (id)inputModeIdentifierLastUsedForLanguage:(id)a0 includingExtensions:(BOOL)a1;
- (id)updateEnabledDictationLanguages:(BOOL)a0;
- (id)keyboardLanguageForDictationLanguage:(id)a0;
- (id)_MCFilteredExtensionIdentifiers;
- (id)inputModesFromIdentifiers:(id)a0;
- (id)textInputModeForResponder:(id)a0;
- (void)updateDefaultInputModesIfNecessaryForIdiom;
- (id)supportedFullModesForHardwareKeyboard:(id)a0 countryCode:(id)a1 activeModes:(id)a2 matchedMode:(id *)a3;
- (void)forceDictationReturnToKeyboardInputMode;
- (void)loadSuggestedInputModesForSiriLanguage;
- (id)fallbackCurrentInputModeForFilteredInputModeIdentifier:(id)a0 fromInputModeIdentifiers:(id)a1;
- (id)inputModesByAppendingApplicationLanguagesToInputModes:(id)a0;
- (id)inputModeToAddForKeyboardLanguage:(id)a0 countryCode:(id)a1 activeModes:(id)a2;
- (unsigned long long)reasonType:(id)a0;
- (void)startConnectionForFileAtURL:(id)a0 forInputModeIdentifier:(id)a1;
- (void)changePreferredEmojiSearchInputModeForInputDelegate:(id)a0;
- (void)stopDictationAndResignFirstResponder;
- (void)switchToDictationInputModeWithOptions:(id)a0;
- (id)nextInputModeToUseForTraits:(id)a0;
- (id)suggestedInputModesForCurrentLocale:(BOOL)a0 fallbackToDefaultInputModes:(BOOL)a1;
- (id)supportedInputModesFromArray:(id)a0;
- (void)switchToDictationInputMode;
- (void)updateEnabledDictationAndSLSLanguagesWithCompletionBlock:(id /* block */)a0;
- (id)suggestedInputModesForPreferredLanguages;
- (id)nextInputModeInPreferenceListForTraits:(id)a0;
- (id)filteredTVInputModesFromInputModes:(id)a0;
- (id)extensionInputModes;
- (void)saveDeviceUnlockPasscodeInputModes;
- (id)filteredInputModesForSiriLanguageFromInputModes:(id)a0;
- (void)willEnterForeground:(id)a0;
- (BOOL)verifyKeyboardExtensionsWithApp;
- (id)fullInputModeFromIdentifier:(id)a0 hardwareKeyboardLanguage:(id)a1;
- (BOOL)isLockscreenPasscodeKeyboard;
- (void)didEnterBackground:(id)a0;
- (id)inputModeLastUsedForLanguage:(id)a0;
- (void)updateUserSelectableInputModes;
- (id)inputModeForASCIIToggleWithTraits:(id)a0;
- (void)_trackInputModeIfNecessary:(id)a0;
- (void)_beginContinuousDiscoveryIfNeeded;
- (void)performWithoutExtensionInputModes:(id /* block */)a0;
- (id)inputModeByReplacingSoftwareLayoutWithSoftwareLayout:(id)a0 inInputMode:(id)a1;
- (id)_systemInputModePassingLanguageTest:(id /* block */)a0;
- (id)activeUserSelectableInputModes;
- (void)dealloc;
- (id)currentSystemInputModeExcludingEmoji:(BOOL)a0;
- (id)defaultDictationLanguages:(id)a0;
- (id)hardwareLayoutToUseForInputMode:(id)a0 hardwareKeyboardLanguage:(id)a1 countryCode:(id)a2;
- (id)userSelectableInputModesFromInputModes:(id)a0;
- (id)_systemInputModePassingTest:(id /* block */)a0;
- (void)getHardwareKeyboardLanguage:(id *)a0 countryCode:(id *)a1;
- (void)_inputModeChangedWhileContextTracked;
- (void)releaseAddKeyboardNotification;
- (id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)a0;
- (void)handleSpecificHardwareKeyboard:(id)a0;
- (id)getDictationSLSLanguagesEnabled;
- (void)didAcceptAddKeyboardInputMode;
- (void)setDictationSLSLanguagesEnabled:(id)a0;
- (void)performWithForcedExtensionInputModes:(id /* block */)a0;
- (BOOL)isDictationLanguageEnabled:(id)a0;
- (void)switchToCurrentSystemInputMode;
- (id)filteredPadInputModesFromInputModes:(id)a0 withRules:(id)a1;
- (void)updateCurrentInputMode:(id)a0;
- (BOOL)toggleDictationForResponder:(id)a0 withOption:(id)a1 firstResponderSetupCompletion:(id /* block */)a2;
- (id)suggestedInputModesForLocales:(id)a0;
- (void)_setCurrentAndNextInputModePreference;
- (id)userSelectableInputModeIdentifiersFromInputModeIdentifiers:(id)a0;
- (id)inputModeWithIdentifier:(id)a0;
- (id)init;
- (id)nextInputModeToUseForTraits:(id)a0 updatePreference:(BOOL)a1;
- (BOOL)_mayContainExtensionInputModes;
- (void)keyboardsPreferencesChanged:(id)a0;
- (id)_prefixedKey;
- (id)identifiersFromInputModes:(id)a0;
- (void)_clearAllExtensions;
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)a0;
- (void)handleLastUsedInputMode:(id)a0 withNewInputMode:(id)a1;
- (id)enabledInputModeIdentifiers:(BOOL)a0;
- (void)startDictationConnectionForFileAtURL:(id)a0 forInputModeIdentifier:(id)a1;
- (id)nextInputModeInPreferenceListForTraits:(id)a0 updatePreference:(BOOL)a1;
- (id)hardwareLayoutToUseForInputMode:(id)a0;
- (void)_setCurrentInputMode:(id)a0 force:(BOOL)a1;
- (void)updateCurrentAndNextInputModes;
- (id)appendPasscodeInputModes:(id)a0;
- (void)toggleDictationForResponder:(id)a0 WithOptions:(id)a1;
- (void).cxx_destruct;
- (void)_clearAllExtensionsIfNeeded;
- (void)stopDictation;
- (id)lastUsedInputModeForTextInputMode:(id)a0;
- (void)showAddKeyboardAlertForInputModeIdentifier:(id)a0;
- (id)fallbackCurrentInputModeForFilteredInputMode:(id)a0 fromInputModes:(id)a1;
- (void)updateLastUsedInputMode:(id)a0;
- (void)presentEnablementAndDataSharingPromptIfNeeded:(id /* block */)a0;
- (id)_prefixedSetTimeKey;
- (id)nextInputModeFromList:(id)a0 withFilter:(unsigned long long)a1 withTraits:(id)a2;
- (id)suggestedInputModesForCurrentLocale;
- (BOOL)deviceStateIsLocked;

@end
