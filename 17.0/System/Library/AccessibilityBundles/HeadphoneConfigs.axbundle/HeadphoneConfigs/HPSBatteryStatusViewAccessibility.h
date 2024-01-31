@interface HPSBatteryStatusViewAccessibility : __HPSBatteryStatusViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setupViews;
- (void)_accessibilityLoadAccessibilityInformation;
- (struct { unsigned char x0; unsigned int x1; unsigned char x2; unsigned int x3; unsigned char x4; unsigned int x5; unsigned char x6; unsigned int x7; unsigned char x8; unsigned int x9; })_accessibilityBatteryStatus;

@end
