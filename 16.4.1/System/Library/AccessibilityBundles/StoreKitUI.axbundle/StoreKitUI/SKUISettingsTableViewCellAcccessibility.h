@interface SKUISettingsTableViewCellAcccessibility : __SKUISettingsTableViewCellAcccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)_axLockupView;
- (id)_axViewContainsSwitch;

@end
