@interface CAMTopBarAccessibility : __CAMTopBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)expandMenuButton:(id)a0 animated:(BOOL)a1;
- (void)collapseMenuButton:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityOnlyComparesByXAxis;

@end
