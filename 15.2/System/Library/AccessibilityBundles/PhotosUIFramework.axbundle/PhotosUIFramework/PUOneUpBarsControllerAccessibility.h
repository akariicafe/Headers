@interface PUOneUpBarsControllerAccessibility : __PUOneUpBarsControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_performToggleFavoriteAction;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_updateToggleDetailsBarButtonItem;
- (id)_newBarButtonItemWithIdentifier:(long long)a0 location:(long long)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axAssetViewModel;
- (BOOL)_axIsFavorite;
- (BOOL)_axDetailsShowing;
- (void)_axLoadFavoriteButtonAccessibility:(id)a0;
- (void)_axLoadLikeButtonAccessibility:(id)a0 identifier:(long long)a1;
- (void)_axLoadEditButtonAccessibility:(id)a0;
- (void)_axLoadAirplayButtonAccessibility:(id)a0;
- (void)_axLoadBackButtonWithNoTitleAccessibility:(id)a0;
- (void)_axLoadDoneButtonAccessibility:(id)a0;
- (void)_axLoadShareButtonAccessibility:(id)a0;
- (void)_axLoadDeleteButtonAccessibility:(id)a0;
- (void)_axLoadMuteButtonAccessibility:(id)a0;
- (void)_axLoadUnmuteButtonAccessibility:(id)a0;
- (void)_axLoadDetailsButtonAccessibility:(id)a0;
- (void)_axLoadRewindButtonAccessibility:(id)a0;

@end
