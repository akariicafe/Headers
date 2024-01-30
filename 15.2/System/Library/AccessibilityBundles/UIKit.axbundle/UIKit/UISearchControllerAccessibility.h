@interface UISearchControllerAccessibility : __UISearchControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewDidLoad;
- (void)_searchBarSearchButtonClicked:(id)a0;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)a0;
- (void)setActive:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;

@end
