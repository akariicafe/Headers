@interface UIStatusBarWindowAccessibility : __UIStatusBarWindowAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityElementsHidden;
- (BOOL)_accessibilityIsIsolatedWindow;
- (long long)_accessibilitySortPriority;
- (BOOL)_accessibilityCanBeConsideredAsMainWindow;

@end
