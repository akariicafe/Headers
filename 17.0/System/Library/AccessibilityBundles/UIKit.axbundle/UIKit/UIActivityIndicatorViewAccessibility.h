@interface UIActivityIndicatorViewAccessibility : __UIActivityIndicatorViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsNotFirstElement;

@end
