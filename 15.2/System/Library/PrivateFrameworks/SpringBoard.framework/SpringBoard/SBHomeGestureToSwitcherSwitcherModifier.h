@class SBSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    struct CGPoint { double x; double y; } _liftOffTranslation;
}

- (double)containerStatusBarAnimationDuration;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)handleTimerEvent:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (id)initWithTransitionID:(id)a0 multitaskingModifier:(id)a1 selectedAppLayout:(id)a2 startingEnvironmentMode:(long long)a3 liftOfVelocity:(struct CGPoint { double x0; double x1; })a4 liftOffTranslation:(struct CGPoint { double x0; double x1; })a5;

@end
