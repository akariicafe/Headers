@interface SBDashBoardSetupViewAccessibility : __SBDashBoardSetupViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_addActivationLockLabels;
- (void)setActivationLockWarningString:(id)a0 detailString:(id)a1 forLanguage:(id)a2;
- (double)setTitleString:(id)a0 forLanguage:(id)a1;
- (id)_accessibilitySafeStackView;
- (void)_axSetupActivationLockLabels;

@end
