@interface CAMModeDialAccessibility : __CAMModeDialAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axCurrentCameraMode;

@end
