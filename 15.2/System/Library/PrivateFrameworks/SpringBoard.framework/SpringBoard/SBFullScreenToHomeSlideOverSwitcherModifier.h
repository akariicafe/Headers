@class SBFullScreenAppLayoutSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
}

@property (nonatomic) long long startingScreenEdge;
@property (nonatomic) BOOL shouldBlurUnreadyScenes;

- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (BOOL)_isIndexSlideOverAppLayout:(unsigned long long)a0;
- (BOOL)_shouldApplySlideOverLayoutToIndex:(unsigned long long)a0;

@end
