@interface UIStatusBarAccessibility : __UIStatusBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityPerformEscape;
- (void)_finishedSettingStyleWithOldHeight:(double)a0 newHeight:(double)a1 animation:(int)a2;
- (void)_adjustDoubleHeightTextVisibility;
- (void)_setDoubleHeightStatusString:(id)a0;
- (BOOL)_accessibilityOverridesInvisibility;
- (BOOL)_accessibilityAlwaysOrderedFirst;

@end
