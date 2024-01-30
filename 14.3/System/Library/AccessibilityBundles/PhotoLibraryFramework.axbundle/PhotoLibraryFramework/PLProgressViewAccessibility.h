@interface PLProgressViewAccessibility : __PLProgressViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (void)setPercentComplete:(float)a0;
- (void)_axUpdateValueBasedOnPercentComplete:(float)a0;

@end
