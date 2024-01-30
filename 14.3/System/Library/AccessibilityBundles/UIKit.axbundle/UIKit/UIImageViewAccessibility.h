@interface UIImageViewAccessibility : __UIImageViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)initWithImage:(id)a0;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;

@end
