@class SBSwitcherModifier, SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier *_animationAttributesModifier;
}

- (id)appLayoutsToCacheFullsizeSnapshots;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (BOOL)completesWhenChildrenComplete;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 nonGestureInitiatedZoomModifier:(id)a2 effectiveStartingEnvironmentMode:(long long)a3 liftOffVelocity:(struct CGPoint { double x0; double x1; })a4;

@end
