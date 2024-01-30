@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject

@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long handBias;
@property long long visceral;
@property BOOL enableProKeyboard;

+ (id)sharedPreferencesController;
+ (id)valueForPreferenceKey:(id)a0 domain:(id)a1;

- (void)_configurePreferences;
- (void)synchronizePreferences;
- (void)forwardInvocation:(id)a0;
- (void)preferencesControllerChanged:(id)a0;
- (double)rivenSizeFactor:(double)a0;
- (id)init;
- (void)setLanguageAwareInputModeLastUsed:(id)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)touchSynchronizePreferencesTimer;
- (void)dealloc;
- (BOOL)spaceConfirmationEnabled;
- (void)setLastUsedDictationLanguages:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)boolForPreferenceKey:(id)a0;
- (id)valueForPreferenceKey:(id)a0;
- (id)valueForKey:(int)a0;
- (BOOL)useHardwareGlobeKeyAsEmojiKey;
- (BOOL)boolForKey:(int)a0;
- (BOOL)isPreferenceKeyLockedDown:(id)a0;
- (void)saveInputModes:(id)a0;
- (BOOL)allEnabledInputModesAreValid;
- (void)setValue:(id)a0 forKey:(int)a1;
- (BOOL)isPasswordAutoFillAllowed;
- (BOOL)defaultGlobeAsEmojiKeySetting;
- (void)setEnabledDictationLanguages:(id)a0;
- (void)performedFirstReachableKeyboardInteraction;
- (BOOL)isFirstReachableKeyboardInteraction;

@end
