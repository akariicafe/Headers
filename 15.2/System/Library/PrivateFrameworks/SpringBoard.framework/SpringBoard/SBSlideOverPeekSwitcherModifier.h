@class SBAppLayout, SBActiveAppLayoutFloatingSwitcherModifier, SBAppSwitcherSettings;

@interface SBSlideOverPeekSwitcherModifier : SBSwitcherModifier {
    SBAppSwitcherSettings *_switcherSettings;
    long long _peekConfiguration;
    SBAppLayout *_peekingAppLayout;
    long long _environmentMode;
    long long _fromFloatingConfiguration;
    SBActiveAppLayoutFloatingSwitcherModifier *_floorModifier;
}

- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)homeScreenDimmingAlpha;
- (BOOL)wantsHomeScreenPointerInteractions;
- (double)homeScreenScale;
- (double)dockWindowLevel;
- (id)visibleHomeAffordanceLayoutElements;
- (unsigned long long)dockWindowLevelPriority;
- (id)keyboardSuppressionMode;
- (BOOL)wantsDockWindowLevelAssertion;
- (long long)dockUpdateMode;
- (double)homeScreenBackdropBlurProgress;
- (unsigned long long)slideOverTongueDirection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (BOOL)wantsDockBehaviorAssertion;
- (double)dockProgress;
- (BOOL)isHomeScreenContentRequired;
- (id)handleTapAppLayoutEvent:(id)a0;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppLayout:(id)a0 peekConfiguration:(long long)a1 environmentMode:(long long)a2 fromFloatingConfiguration:(long long)a3;

@end
