@class SBSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    struct CGPoint { double x; double y; } _liftOffTranslation;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (double)containerStatusBarAnimationDuration;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (id)initWithTransitionID:(id)a0 multitaskingModifier:(id)a1 selectedAppLayout:(id)a2 startingEnvironmentMode:(long long)a3 liftOfVelocity:(struct CGPoint { double x0; double x1; })a4 liftOffTranslation:(struct CGPoint { double x0; double x1; })a5;

@end
