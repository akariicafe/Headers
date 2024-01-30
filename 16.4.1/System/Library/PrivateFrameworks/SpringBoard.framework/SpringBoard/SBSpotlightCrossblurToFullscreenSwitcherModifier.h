@class SBAppLayout;

@interface SBSpotlightCrossblurToFullscreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
}

@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (double)homeScreenBackdropBlurProgress;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)_opacitySettings;
- (id)_layoutSettings;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1;

@end
