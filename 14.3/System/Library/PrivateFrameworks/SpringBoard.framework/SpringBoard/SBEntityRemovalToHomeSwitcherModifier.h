@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    double _homeAnimationDelay;
    BOOL _canAnimateHomeScreenStyle;
}

- (long long)dockUpdateMode;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (id)transitionWillUpdate;
- (double)homeScreenBackdropBlurProgress;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)wantsDockBehaviorAssertion;
- (double)homeScreenScale;
- (double)dockProgress;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)homeScreenDimmingAlpha;
- (double)wallpaperScale;
- (double)homeScreenAlpha;
- (id)initWithTransitionID:(id)a0 homeAnimationDelay:(double)a1 multitaskingModifier:(id)a2;
- (id)_cornerRadiusSettings;
- (BOOL)isContentStatusBarVisible;

@end
