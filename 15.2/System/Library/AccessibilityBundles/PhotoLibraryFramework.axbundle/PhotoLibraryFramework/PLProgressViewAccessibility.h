@interface PLProgressViewAccessibility : __PLProgressViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)setPercentComplete:(float)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateValueBasedOnPercentComplete:(float)a0;

@end
