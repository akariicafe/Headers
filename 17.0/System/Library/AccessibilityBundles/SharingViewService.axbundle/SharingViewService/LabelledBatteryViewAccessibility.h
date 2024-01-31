@interface LabelledBatteryViewAccessibility : __LabelledBatteryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_axBatteryType;
- (void)_axSetBatteryType:(id)a0;
- (void)setAXBatteryType:(id)a0;

@end
