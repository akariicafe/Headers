@interface PKPaymentPassDetailViewControllerAccessibility : __PKPaymentPassDetailViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_linkCellWithText:(id)a0 forTableView:(id)a1;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id *)a0 forRowIndex:(long long)a1 tableView:(id)a2;
- (id)_infoCellWithDescription:(id)a0 forTableView:(id)a1;
- (void)_axLabelIssuerLogo;
- (void)_axLoadAccessibilityInformationForCell:(id)a0 atIndexPath:(id)a1;
- (void)_axSetSanitizedLabelForCell:(id)a0;

@end
