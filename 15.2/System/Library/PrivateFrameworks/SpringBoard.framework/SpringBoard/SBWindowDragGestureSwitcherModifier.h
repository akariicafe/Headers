@class NSString, SBWindowDragGestureDestinationModifier, SBAppLayout;

@interface SBWindowDragGestureSwitcherModifier : SBGestureSwitcherModifier <SBWindowDragGestureDestinationModifierDelegate> {
    SBWindowDragGestureDestinationModifier *_destinationModifier;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _anchorPointOfSelectedAppLayout;
    double _progressToMaxTranslation;
    double _toHomeScreenAlpha;
    double _toHomeScreenBlurProgress;
    double _toHomeScreenDimmingAlpha;
}

@property (readonly, nonatomic) SBAppLayout *selectedAppLayout;
@property (readonly, nonatomic) SBAppLayout *initialAppLayout;
@property (readonly, nonatomic) SBAppLayout *initialFloatingAppLayout;
@property (readonly, nonatomic) long long currentFloatingConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (id)visibleHomeAffordanceLayoutElements;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (id)keyboardSuppressionMode;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)blurViewIconScaleForIndex:(unsigned long long)a0;
- (double)homeScreenBackdropBlurProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenAlpha;
- (BOOL)isHomeScreenContentRequired;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutContainingAppLayout:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (void).cxx_destruct;
- (long long)wallpaperStyle;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (unsigned long long)currentDestination;
- (id)handleSceneReadyEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (double)_gestureProgressToMaxTranslationForTranslation:(double)a0;
- (double)_distanceYToMaxTranslation;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 initialAppLayout:(id)a2 initialFloatingAppLayout:(id)a3 initialFloatingConfiguration:(long long)a4;
- (double)platterScaleForWindowDragGestureDestinationModifier:(id)a0;
- (id)_insertSelectedAppLayout:(id)a0 intoAppLayout:(id)a1 inRole:(long long)a2 configuration:(long long)a3 centerConfiguration:(long long)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialTransformedFrameForDraggingAppLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForDraggingAppLayout;
- (double)_scaleForTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_shouldPushInFullScreenContent;
- (double)_platterScale;
- (BOOL)_updateHomeScreenStyleInteractively;
- (BOOL)_draggingFullScreenAppOrSplitView;

@end
