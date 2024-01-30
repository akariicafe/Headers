@interface UIStatusBarAccessibility : __UIStatusBarAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_finishedSettingStyleWithOldHeight:(double)a0 newHeight:(double)a1 animation:(int)a2;
- (void)_setDoubleHeightStatusString:(id)a0;
- (BOOL)_accessibilityOverridesInvisibility;
- (BOOL)accessibilityPerformEscape;
- (void)_adjustDoubleHeightTextVisibility;

@end
