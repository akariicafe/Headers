@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {
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
@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;
@property (nonatomic) BOOL shouldDockOrderFrontDuringTransition;
@property (nonatomic) BOOL shouldDisableAsyncRendering;
@property (readonly, nonatomic) SBAppLayout *appLayout;

- (BOOL)asyncRenderingDisabled;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)containerLeafAppLayoutForShelf:(id)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)homeScreenAlpha;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (BOOL)_isIndexZoomAppLayout:(unsigned long long)a0;
- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isSwitcherWindowVisible;
- (void)didMoveToParentModifier:(id)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (long long)dockUpdateMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)wantsDockWindowLevelAssertion;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (id)topMostLayoutElements;
- (double)dockProgress;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)dockWindowLevel;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)_settingsByInterpolatingBetween:(id)a0 and:(id)a1 progress:(double)a2;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (BOOL)_isEffectivelyHome;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (struct SBSwitcherShelfPresentationAttributes { BOOL x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned long long x2; unsigned long long x3; })presentationAttributesForShelf:(id)a0;
- (id)layoutSettingsForTargetCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullyPresentedFrameForIndex:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint { double x0; double x1; })a0;

@end
