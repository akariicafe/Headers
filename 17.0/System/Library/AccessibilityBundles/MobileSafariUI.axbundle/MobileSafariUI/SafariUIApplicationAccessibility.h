@interface SafariUIApplicationAccessibility : __SafariUIApplicationAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)_accessibilityActiveURL;
- (BOOL)_accessibilityAlternateActionForURL:(id)a0;
- (BOOL)_accessibilityLoadURL:(id)a0;
- (BOOL)_accessibilityWebSearchResultsActive;
- (BOOL)_accessibilityWebViewIsLoading;
- (id)_accessibilityMainBrowserController;
- (id)_accessibilityRetrieveWebViewForSearchResults;

@end
