@interface UIImageViewAccessibility : __UIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)initWithImage:(id)a0;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentification;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;

@end
