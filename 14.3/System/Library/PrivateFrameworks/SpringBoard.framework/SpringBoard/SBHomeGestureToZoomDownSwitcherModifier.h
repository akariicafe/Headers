@class SBSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    unsigned long long _iconGridSizeClass;
    BOOL _overshootScaleForWidgetZoomDown;
}

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)_settingsByInterpolatingBetween:(id)a0 and:(id)a1 progress:(double)a2;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)_scaleSettings;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 nonGestureInitiatedZoomModifier:(id)a2 effectiveStartingEnvironmentMode:(long long)a3 liftOffVelocity:(struct CGPoint { double x0; double x1; })a4;
- (id)_positionSettings;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;

@end
