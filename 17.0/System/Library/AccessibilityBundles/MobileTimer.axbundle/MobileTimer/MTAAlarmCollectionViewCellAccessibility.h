@interface MTAAlarmCollectionViewCellAccessibility : __MTAAlarmCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axIsEditing;
- (BOOL)_axToggleSwitch;
- (BOOL)_axDeleteAlarm;
- (void)_axModifyDeleteButton;

@end
