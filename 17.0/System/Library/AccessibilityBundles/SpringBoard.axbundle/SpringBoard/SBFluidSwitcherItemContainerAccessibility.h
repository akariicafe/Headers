@interface SBFluidSwitcherItemContainerAccessibility : __SBFluidSwitcherItemContainerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_viewToAddFocusLayer;
- (id)accessibilityHint;
- (id)accessibilityPath;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (BOOL)_accessibilityCanPerformAction:(int)a0;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)_accessibilityIsNotFirstElement;
- (id)_accessibilityBundleIdentifier;
- (id)_accessibilityCustomActionGroupIdentifier;
- (BOOL)_accessibilityElementVisibilityAffectsLayout;
- (BOOL)_accessibilityIsInAppSwitcher;
- (id)_accessibilityPreferredScrollActions;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityScrollStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityVisibleFrame;
- (BOOL)_accessibilityCanCloseApp;
- (BOOL)_accessibilityHasMultipleWindows;
- (id)_axMainSwitcher;
- (void)_accessibilityCloseApp:(id)a0;
- (BOOL)_accessibilityIsNewWindowContainer;
- (BOOL)_accessibilityIsShelfItemContainer;
- (BOOL)_accessibilityIsSlideOver;
- (id)_accessibilityItemContainerFooterView;
- (id)_accessibilityItemContainerHeaderView;
- (id)_accessibilityTitleItem;
- (id)_axAppLayout;
- (id)_axBundleIdentifier;
- (id)_axFluidSwitcher;
- (void)_axHandlePageViewTap:(id)a0;
- (id)_axParentAppLayout;

@end
