@interface CAMModeDialAccessibility : __CAMModeDialAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axCurrentCameraMode;

@end
