@interface UIStatusBarBatteryItemViewAccessibility : __UIStatusBarBatteryItemViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityLabel;

@end
