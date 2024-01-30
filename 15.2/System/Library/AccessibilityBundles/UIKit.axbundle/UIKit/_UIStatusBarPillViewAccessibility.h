@interface _UIStatusBarPillViewAccessibility : ___UIStatusBarPillViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElements;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
