@class SBAppLayoutAccessibility, SBFluidSwitcherItemContainerAccessibility, SBFluidSwitcherContentViewAccessibility;
@protocol SBAppSwticherAppAccessibilityElementDelegate;

@interface SBAppSwitcherAppAccessibilityElement : UIAccessibilityElement

@property (readonly, nonatomic) BOOL isControlCenter;
@property (retain, nonatomic) SBAppLayoutAccessibility *appLayout;
@property (weak, nonatomic) SBFluidSwitcherItemContainerAccessibility *itemContainer;
@property (weak, nonatomic) SBFluidSwitcherContentViewAccessibility *contentView;
@property (weak, nonatomic) id<SBAppSwticherAppAccessibilityElementDelegate> delegate;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityCanPerformAction:(int)a0;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)_accessibilityUpdatesSwitchMenu;
- (id)_accessibilityBundleIdentifier;
- (id)_accessibilityCustomActionGroupIdentifier;
- (BOOL)_accessibilityIsDescendantOfElement:(id)a0;
- (BOOL)_accessibilityIsInAppSwitcher;
- (BOOL)_accessibilityIsVisibleByCompleteHitTest;
- (id)_accessibilityPreferredScrollActions;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_axIsAppActive;

@end
