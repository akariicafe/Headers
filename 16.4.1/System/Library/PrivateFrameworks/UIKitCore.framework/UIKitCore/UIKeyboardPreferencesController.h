@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject

@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long handBias;
@property long long compactAssistantBarPersistentLocation;
@property long long visceral;
@property BOOL enableProKeyboard;

+ (id)sharedPreferencesController;

- (BOOL)isPreferenceKeyLockedDown:(id)a0;
- (BOOL)allEnabledInputModesAreValid;
- (void)setValue:(id)a0 forKey:(int)a1;
- (void)setLanguageAwareInputModeLastUsed:(id)a0;
- (void)preferencesControllerChanged:(id)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (BOOL)boolForKey:(int)a0;
- (void)synchronizePreferences;
- (BOOL)currentInputModeSupportsCrescendo;
- (id)valueForPreferenceKey:(id)a0;
- (id)valueForKey:(int)a0;
- (void)touchSynchronizePreferencesTimer;
- (BOOL)spaceConfirmationEnabled;
- (void)performedFirstReachableKeyboardInteraction;
- (BOOL)inputModeSupportsCrescendo:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)setEnabledDictationLanguages:(id)a0;
- (BOOL)useHardwareGlobeKeyAsEmojiKey;
- (void)setDictationAutoPunctuation:(BOOL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)crescendoEnabled;
- (BOOL)isFirstReachableKeyboardInteraction;
- (void)setLastUsedDictationLanguages:(id)a0;
- (id)init;
- (BOOL)isPasswordAutoFillAllowed;
- (BOOL)defaultGlobeAsEmojiKeySetting;
- (void)saveInputModes:(id)a0;
- (BOOL)boolForPreferenceKey:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)_configurePreferences;
- (double)rivenSizeFactor:(double)a0;

@end
