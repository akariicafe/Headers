@interface MPRecentsTableViewControllerAccessibility : __MPRecentsTableViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityTableView:(id)a0 endRowActionHandlingForIndexPath:(id)a1;
- (void)_accessibilityTableView:(id)a0 prepareForRowActionHandlingForIndexPath:(id)a1;

@end
