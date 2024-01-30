@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    double _homeAnimationDelay;
    BOOL _canAnimateHomeScreenStyle;
}

- (id)transitionWillBegin;
- (BOOL)isContainerStatusBarVisible;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (BOOL)wantsDockBehaviorAssertion;
- (long long)dockUpdateMode;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)dockProgress;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)wallpaperScale;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenBackdropBlurProgress;
- (id)handleTimerEvent:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (id)_cornerRadiusSettings;
- (id)initWithTransitionID:(id)a0 homeAnimationDelay:(double)a1 multitaskingModifier:(id)a2;
- (BOOL)isContentStatusBarVisible;

@end
