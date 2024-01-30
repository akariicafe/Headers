@interface CAMModeDialAccessibility : __CAMModeDialAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axCurrentCameraMode;

@end
