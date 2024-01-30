@interface UIImageViewAccessibility : __UIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)initWithImage:(id)a0;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentification;
- (id)accessibilityValue;
- (id)accessibilityElements;
- (id)accessibilityLabel;

@end
