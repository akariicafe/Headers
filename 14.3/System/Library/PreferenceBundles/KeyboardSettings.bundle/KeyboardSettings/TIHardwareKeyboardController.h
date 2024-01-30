@class KeyboardBrightnessClient;

@interface TIHardwareKeyboardController : PSListController {
    KeyboardBrightnessClient *_keyboardBrightnessClient;
}

+ (id)IOHIDKeyboardLanguageToCapsLockKeyLabel;

- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)appWillResignActive:(id)a0;
- (void)appWillEnterForeground:(id)a0;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)hardwareKeyboardAvailabilityChanged;
- (id)newSpecifiers;
- (BOOL)isTrackingBrightnessSlider;
- (id)separateHWKeyboardSpecifiers;
- (BOOL)shouldShowGlobeKeyPreference;
- (id)globeAsEmojiSpecifiers;
- (id)capsLockSwitchSpecifiersFromModes:(id)a0;
- (id)keyboardBrightnessSpecifiers;
- (id)modifierRemapSpecifiers;
- (void)suspendIdleDimming:(BOOL)a0;
- (void)setBrightness:(id)a0 specifier:(id)a1;
- (id)getBrightness:(id)a0;
- (void)toggledGlobeKey:(id)a0 specifier:(id)a1;
- (id)globeKeyPreference:(id)a0;
- (BOOL)defaultValueForGlobeAsEmojiKey;
- (id)readPreferenceControllerValue:(id)a0;
- (id)readRomanCapsLockPreferenceValue:(id)a0;
- (void)setRomanCapsLockPreferenceValue:(id)a0 forSpecifier:(id)a1;

@end
