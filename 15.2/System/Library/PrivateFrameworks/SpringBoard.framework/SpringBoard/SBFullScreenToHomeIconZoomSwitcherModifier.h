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

- (id)containerLeafAppLayoutForShelf:(id)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)dockWindowLevel;
- (id)visibleHomeAffordanceLayoutElements;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)wantsDockWindowLevelAssertion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)wantsDockBehaviorAssertion;
- (double)dockProgress;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (id)visibleAppLayouts;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_settingsByInterpolatingBetween:(id)a0 and:(id)a1 progress:(double)a2;
- (id)appLayoutsToCacheSnapshots;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullyPresentedFrameForIndex:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)layoutSettingsForTargetCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isEffectivelyHome;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint { double x0; double x1; })a0;
- (struct SBSwitcherShelfPresentationAttributes { BOOL x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned long long x2; unsigned long long x3; })presentationAttributesForShelf:(id)a0;
- (id)transitionDidEnd;
- (BOOL)_isIndexZoomAppLayout:(unsigned long long)a0;

@end
