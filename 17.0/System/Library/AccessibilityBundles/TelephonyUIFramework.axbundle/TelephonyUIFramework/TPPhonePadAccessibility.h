@interface TPPhonePadAccessibility : __TPPhonePadAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsScannerGroup;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScannerGroupTraits;

@end
