@interface AXTripleClickHelpers : NSObject

+ (void)_toggleVoiceOver;
+ (void)_toggleSmartInvertColorsOffMainThread;
+ (void)toggleColorFilter;
+ (void)_toggleZoomOffMainThread;
+ (void)_toggleAssistiveTouch;
+ (id)_availableFeatures;
+ (void)toggleGuidedAccessFromControlCenter;
+ (void)toggleFullKeyboardAccess;
+ (BOOL)_shouldShowFeatureInShortcutsControlCenterModule:(int)a0 includeGuidedAccess:(BOOL)a1;
+ (id)titleForTripleClickOption:(int)a0;
+ (BOOL)valueForTripleClickOption:(int)a0;
+ (void)_promptToDisableBrightnessFilters:(id /* block */)a0 data:(id)a1;
+ (void)toggleTripleClickOption:(int)a0;
+ (id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(BOOL)a0;

@end
