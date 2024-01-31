@interface PSListControllerAccessibility : __PSListControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)highlightSpecifierWithID:(id)a0;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1;
- (void)reloadSpecifierAtIndex:(int)a0 animated:(BOOL)a1;
- (BOOL)_accessibilityHandleNavigationControllerDidEndTransition;

@end
