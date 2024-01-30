@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject

@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long handBias;
@property long long compactAssistantBarPersistentLocation;
@property long long visceral;
@property BOOL enableProKeyboard;

+ (id)sharedPreferencesController;

- (BOOL)boolForPreferenceKey:(id)a0;
- (void)synchronizePreferences;
- (double)rivenSizeFactor:(double)a0;
- (BOOL)spaceConfirmationEnabled;
- (id)valueForKey:(int)a0;
- (void)_configurePreferences;
- (BOOL)isFirstReachableKeyboardInteraction;
- (void)performedFirstReachableKeyboardInteraction;
- (id)valueForPreferenceKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)setLanguageAwareInputModeLastUsed:(id)a0;
- (void)setValue:(id)a0 forKey:(int)a1;
- (BOOL)allEnabledInputModesAreValid;
- (BOOL)isPreferenceKeyLockedDown:(id)a0;
- (id)init;
- (void)preferencesControllerChanged:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)useHardwareGlobeKeyAsEmojiKey;
- (BOOL)isPasswordAutoFillAllowed;
- (void)dealloc;
- (void)saveInputModes:(id)a0;
- (BOOL)boolForKey:(int)a0;
- (void)setLastUsedDictationLanguages:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)defaultGlobeAsEmojiKeySetting;
- (void)touchSynchronizePreferencesTimer;
- (void)setEnabledDictationLanguages:(id)a0;

@end
