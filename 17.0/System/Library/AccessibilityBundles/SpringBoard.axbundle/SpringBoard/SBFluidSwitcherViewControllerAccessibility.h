@class NSString;

@interface SBFluidSwitcherViewControllerAccessibility : __SBFluidSwitcherViewControllerAccessibility_super <SBAppSwticherAppAccessibilityElementDelegate>

@property (readonly, nonatomic) BOOL _axIsVisible;
@property (copy, nonatomic, getter=_axSwitcherType, setter=_setAXSwitcherType:) id /* block */ _axSwitcherType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_addVisibleItemContainerForAppLayout:(id)a0 reusingItemContainerIfExists:(id)a1;
- (void)performTransitionWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)_updatePlusButtonPresence;
- (void)_setupContentAndTransientViews;
- (BOOL)_removeVisibleItemContainerForAppLayout:(id)a0;
- (void)handleReopenClosedWindowsButtonTapped:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (id)_axContentView;
- (unsigned long long)_axNumberOfPages;
- (id)_accessibilityAppLayoutAtCurrentContentOffset;
- (id)_axMainSwitcher;
- (BOOL)_accessibilityAppQuitNotificationsRegistered;
- (void)_accessibilityRegisterAppQuitNotifications;
- (void)_accessibilitySetAppQuitNotificationsRegistered:(BOOL)a0;
- (void)_accessibilityUnregisterAppQuitNotifications;
- (unsigned long long)_axAdjustedIndex:(unsigned long long)a0 forScrollDirection:(long long)a1;
- (id)_axAppLayoutForAppIdentifier:(id)a0;
- (id)_axAppLayouts;
- (id)_axChamoisActiveAppLayouts;
- (id)_axChamoisActiveApps;
- (id)_axCollectedAppLayouts;
- (id)_axCollectedVisibleItemContainers;
- (void)_axCreateAppElements;
- (void)_axCreateAppElementsForLayouts:(id)a0 visibleItemContainers:(id)a1;
- (void)_axCreateInitialAppElements;
- (unsigned long long)_axCurrentAppLayoutIndex;
- (void)_axDidQuitApp:(id)a0;
- (long long)_axEnvironmentMode;
- (id)_axGridLayoutModifierIfExists;
- (BOOL)_axHasMultirowLayout;
- (id)_axIdentifierOfAppInLayoutState:(id)a0;
- (unsigned long long)_axPageForIndex:(unsigned long long)a0;
- (BOOL)_axPerformScrollToIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_axScrollStatusForIndex:(unsigned long long)a0;
- (void)_axScrollToAppLayout:(id)a0 completion:(id /* block */)a1;
- (BOOL)_axShouldReverseElements;
- (id)_axSortedElementArray:(id)a0;
- (void)_axUpdateElementOrderingIfNecessary;
- (void)_axUpdateElements:(id)a0 withVisibleItemContainers:(id)a1;
- (id)_axVisibleAppLayouts;
- (BOOL)appElementIsAccessibilityElement:(id)a0;

@end
