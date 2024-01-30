@interface UIStatusBarWindowAccessibility : __UIStatusBarWindowAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityElementsHidden;
- (BOOL)_wantsFocusEngine;
- (BOOL)_accessibilityCanBeConsideredAsMainWindow;
- (BOOL)_accessibilityIsIsolatedWindow;
- (long long)_accessibilitySortPriority;

@end
