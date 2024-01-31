@interface PLProgressViewAccessibility : __PLProgressViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)setPercentComplete:(float)a0;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateValueBasedOnPercentComplete:(float)a0;

@end
