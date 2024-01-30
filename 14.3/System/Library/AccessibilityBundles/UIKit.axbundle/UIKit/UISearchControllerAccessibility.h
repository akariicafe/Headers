@interface UISearchControllerAccessibility : __UISearchControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setActive:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)a0;
- (void)_searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;

@end
