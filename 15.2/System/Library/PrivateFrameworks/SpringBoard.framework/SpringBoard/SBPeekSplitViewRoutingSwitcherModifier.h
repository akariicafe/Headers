@class SBAppSwitcherSettings, NSString, SBSwitcherModifier, SBAppLayout, SBTransitionSwitcherModifier, SBRoutingSwitcherModifier;

@interface SBPeekSplitViewRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate> {
    SBAppSwitcherSettings *_switcherSettings;
    SBSwitcherModifier *_peekingModifier;
    SBSwitcherModifier *_nonPeekingModifier;
    SBRoutingSwitcherModifier *_routingModifier;
    long long _peekConfiguration;
    long long _spaceConfiguration;
    SBAppLayout *_peekingAppLayout;
    long long _peekState;
    SBTransitionSwitcherModifier *_exitingTransitionTrackingModifier;
    SBAppLayout *_splitViewAppLayout;
    SBAppLayout *_toAppLayout;
    BOOL _uncondtionallyAllowAppLayoutContainment;
    BOOL _isRotating;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modifierForEvent:(id)a0;

- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (id)visibleHomeAffordanceLayoutElements;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (id)keyboardSuppressionMode;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (BOOL)isHomeScreenContentRequired;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleTapAppLayoutEvent:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (unsigned long long)hiddenContainerStatusBarParts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutContainingAppLayout:(id)a0;
- (unsigned long long)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)a0;
- (BOOL)canPerformKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (id)handleEvent:(id)a0;
- (id)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForLayoutRole:(long long)a0 inAppLayout:(id)a1 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (id)routingModifier:(id)a0 event:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 filteredAppLayouts:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 modifierForAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })routingModifier:(id)a0 containerViewBoundsForModifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })routingModifier:(id)a0 switcherViewBoundsForModifier:(id)a1;
- (id)scrollModifierForRoutingModifier:(id)a0;
- (id)homeScreenModifierForRoutingModifier:(id)a0;
- (id)transactionCompletionOptionsModifierForRoutingModifier:(id)a0;
- (id)routingModifier:(id)a0 animationAttributesModifierForLayoutElement:(id)a1;
- (id)debugPotentialChildModifiers;
- (id)initWithPeekConfiguration:(long long)a0 spaceConfiguration:(long long)a1 peekingAppLayout:(id)a2;
- (void)_temporarilyAllowUnconditionaryAppLayoutContainmentWithBlock:(id /* block */)a0;
- (BOOL)_isAppLayoutBeingResized:(id)a0;
- (id)_combinedResultingAppLayoutWithAppLayout:(id)a0;

@end
