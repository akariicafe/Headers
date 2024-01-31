@interface TPLCDViewAccessibility : __TPLCDViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;

@end
