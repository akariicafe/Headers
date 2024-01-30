@interface UIActivityIndicatorViewAccessibility : __UIActivityIndicatorViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsNotFirstElement;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end
