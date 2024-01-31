@interface UIImageViewAccessibility : __UIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)initWithImage:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentification;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;

@end
