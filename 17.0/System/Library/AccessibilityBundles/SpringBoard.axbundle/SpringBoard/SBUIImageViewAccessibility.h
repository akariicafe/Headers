@interface SBUIImageViewAccessibility : __SBUIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;

@end
