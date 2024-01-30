@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _homeScreenIconFrame;
    double _homeScreenIconCornerRadius;
    double _homeScreenIconScale;
    BOOL _homeScreenIconLocationIsFloatingDock;
    BOOL _itemContainerOverlapsDock;
    BOOL _wantsDockWindowLevelAssertion;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    BOOL _shouldAcceleratedHomeButtonPressBegin;
}

@property (nonatomic) BOOL shouldUpdateIconViewVisibility;
@property (nonatomic) BOOL shouldMatchMoveToIconView;

- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)appLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;
- (BOOL)_isEffectivelyHome;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (BOOL)_isIndexZoomAppLayout:(unsigned long long)a0;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (void).cxx_destruct;
- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint { double x0; double x1; })a0;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (double)dockWindowLevel;
- (id)transitionWillBegin;
- (id)transitionDidEnd;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (id)_settingsByInterpolatingBetween:(id)a0 and:(id)a1 progress:(double)a2;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsDockBehaviorAssertion;
- (void)didMoveToParentModifier:(id)a0;
- (double)dockProgress;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)wantsDockWindowLevelAssertion;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (id)layoutSettingsForTargetCenter:(struct CGPoint { double x0; double x1; })a0;

@end
