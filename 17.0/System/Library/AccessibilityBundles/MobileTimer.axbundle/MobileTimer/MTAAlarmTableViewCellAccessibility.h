@interface MTAAlarmTableViewCellAccessibility : __MTAAlarmTableViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)refreshUI:(id)a0 animated:(BOOL)a1;
- (BOOL)_axIsEditing;
- (id)_axEnabledSwitch;
- (void)_axSetDetailLabelForAlarm:(id)a0;

@end
