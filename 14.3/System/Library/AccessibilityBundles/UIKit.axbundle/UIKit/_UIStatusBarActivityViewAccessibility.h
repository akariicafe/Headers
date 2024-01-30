@interface _UIStatusBarActivityViewAccessibility : ___UIStatusBarActivityViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;

@end
