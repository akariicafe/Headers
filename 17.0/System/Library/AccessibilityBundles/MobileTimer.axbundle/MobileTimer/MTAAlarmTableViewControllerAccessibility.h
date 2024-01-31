@interface MTAAlarmTableViewControllerAccessibility : __MTAAlarmTableViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetDetailLabelsForVisibleCells;
- (void)_axSetHeaderLabelForSleepSection:(id)a0;

@end
