@interface UIActivityIndicatorViewAccessibility : __UIActivityIndicatorViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsNotFirstElement;

@end
