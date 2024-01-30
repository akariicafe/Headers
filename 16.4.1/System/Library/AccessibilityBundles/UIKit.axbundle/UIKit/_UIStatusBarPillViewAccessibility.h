@interface _UIStatusBarPillViewAccessibility : ___UIStatusBarPillViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (id)accessibilityHint;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityRespondsToUserInteraction;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
