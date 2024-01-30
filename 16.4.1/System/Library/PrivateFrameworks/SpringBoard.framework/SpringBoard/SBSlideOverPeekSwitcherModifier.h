@class SBAppLayout, SBActiveAppLayoutFloatingSwitcherModifier, SBAppSwitcherSettings;

@interface SBSlideOverPeekSwitcherModifier : SBSwitcherModifier {
    SBAppSwitcherSettings *_switcherSettings;
    long long _peekConfiguration;
    SBAppLayout *_peekingAppLayout;
    long long _environmentMode;
    long long _fromFloatingConfiguration;
    SBActiveAppLayoutFloatingSwitcherModifier *_floorModifier;
}

- (id)keyboardSuppressionMode;
- (id)visibleHomeAffordanceLayoutElements;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)wantsHomeScreenPointerInteractions;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (id)handleTapAppLayoutEvent:(id)a0;
- (long long)wallpaperStyle;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)dockUpdateMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (unsigned long long)slideOverTongueDirection;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)homeScreenDimmingAlpha;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)dockProgress;
- (double)dockWindowLevel;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 peekConfiguration:(long long)a1 environmentMode:(long long)a2 fromFloatingConfiguration:(long long)a3;

@end
