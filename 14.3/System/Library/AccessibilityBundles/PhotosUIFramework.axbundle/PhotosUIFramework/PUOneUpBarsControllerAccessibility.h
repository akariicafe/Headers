@interface PUOneUpBarsControllerAccessibility : __PUOneUpBarsControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_performToggleFavoriteAction;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)_newBarButtonItemWithIdentifier:(long long)a0 location:(long long)a1;
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
