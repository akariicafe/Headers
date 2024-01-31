@interface CAMModeDialAccessibility : __CAMModeDialAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axCurrentCameraMode;

@end
