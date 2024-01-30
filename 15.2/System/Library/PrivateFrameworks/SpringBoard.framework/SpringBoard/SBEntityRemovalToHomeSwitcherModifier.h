@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    double _homeAnimationDelay;
    BOOL _canAnimateHomeScreenStyle;
}

- (BOOL)isContainerStatusBarVisible;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (BOOL)wantsDockWindowLevelAssertion;
- (long long)dockUpdateMode;
- (double)homeScreenBackdropBlurProgress;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)wantsDockBehaviorAssertion;
- (double)dockProgress;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)transitionWillUpdate;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)handleTimerEvent:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)a0 homeAnimationDelay:(double)a1 multitaskingModifier:(id)a2;
- (id)_cornerRadiusSettings;
- (BOOL)isContentStatusBarVisible;

@end
