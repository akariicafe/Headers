@class NSSet, NSMutableSet, SBAppLayout;

@interface SBMedusaWindowDragTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    SBAppLayout *_discardedAppLayout;
    long long _discardedLayoutRole;
    unsigned long long _finalWindowDragDestination;
    BOOL _isGoingToHomeScreenPeek;
    NSSet *_initiallyBlurredDisplayItems;
    NSMutableSet *_waitingForSceneUpdateForDisplayItems;
    BOOL _hasAddedChildTransitionModifiers;
}

- (id)appLayoutToAttachSlideOverTongue;
- (id)appLayoutContainingAppLayout:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (long long)wallpaperStyle;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)homeScreenDimmingAlpha;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (id)topMostLayoutElements;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isHomeScreenContentRequired;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (long long)homeScreenBackdropBlurType;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)_goingToHomeScreenPeekFromSplitView;
- (BOOL)_minimizingCenterWindow;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 fromAppLayout:(id)a2 toAppLayout:(id)a3 toFloatingAppLayout:(id)a4 toHomeScreenPeek:(BOOL)a5 toAppExposeBundleIdentifier:(id)a6 initiallyBlurredDisplayItems:(id)a7 windowDragDestination:(unsigned long long)a8;

@end
