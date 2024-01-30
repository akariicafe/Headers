@interface SKUISettingsTableViewCellAcccessibility : __SKUISettingsTableViewCellAcccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (id)_axLockupView;
- (id)_axViewContainsSwitch;

@end
