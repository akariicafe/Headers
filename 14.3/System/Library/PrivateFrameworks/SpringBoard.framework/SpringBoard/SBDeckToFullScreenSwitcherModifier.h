@class SBSwitcherModifier, SBAppLayout;

@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_deckModifier;
    BOOL _wantsMinificationFilter;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)handleMainTransitionEvent:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 deckModifier:(id)a3;
- (id)_appLayoutToScrollToDuringTransition;

@end
