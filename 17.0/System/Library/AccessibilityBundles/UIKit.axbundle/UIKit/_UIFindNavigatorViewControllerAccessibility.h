@interface _UIFindNavigatorViewControllerAccessibility : ___UIFindNavigatorViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_didEnterReplacementString:(id)a0;
- (void)_handleHighlightPreviousResult:(id)a0;
- (void)_handleDone:(id)a0;
- (void)_performSearchWithQuery:(id)a0 options:(id)a1;
- (void)_handleSearchReturn:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnounceCurrentSearchResult;
- (void)_axAnnounceReplacementWithPreviousResultCount:(long long)a0 previousIndex:(long long)a1;
- (void)_axReloadElementRelations:(BOOL)a0;

@end
