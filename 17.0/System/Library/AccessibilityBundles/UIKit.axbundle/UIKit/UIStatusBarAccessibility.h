@interface UIStatusBarAccessibility : __UIStatusBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_finishedSettingStyleWithOldHeight:(double)a0 newHeight:(double)a1 animation:(int)a2;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (void)_adjustDoubleHeightTextVisibility;
- (void)_setDoubleHeightStatusString:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (BOOL)_accessibilityOverridesInvisibility;

@end
