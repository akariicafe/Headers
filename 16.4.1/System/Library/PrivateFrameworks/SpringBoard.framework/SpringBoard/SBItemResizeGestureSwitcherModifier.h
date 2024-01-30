@class SBDisplayItemLayoutGrid, SBAppLayout;

@interface SBItemResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    long long _selectedLayoutRole;
    unsigned long long _selectedEdge;
    unsigned long long _resizeAnchor;
    struct CGPoint { double x; double y; } _location;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrameInScreenCoordinates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentFrameForDrawingInScreenCoordinates;
    struct CGSize { double width; double height; } _currentSceneSize;
    SBDisplayItemLayoutGrid *_layoutGrid;
    unsigned long long _currentActiveResizeCorner;
}

@property (readonly, nonatomic) SBAppLayout *selectedAppLayout;

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isItemResizingAllowedForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)layoutRestrictionInfoForItem:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (BOOL)wantsSceneResizesHostedContextForAppLayout:(id)a0;
- (id)_animationSettingsForLayout;
- (BOOL)_anyItemExceedsWidthThresholdToHideStrip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertToScreenRectFromSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertToSpaceRectFromScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialScaledFrameInScreenCoordinatesForSelectedDisplayItemInAppLayout:(id)a0;
- (id)_responseForGestureUpdateAtGestureEnd:(BOOL)a0;
- (id)_responseForSceneSizeUpdateToSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1 sceneUpdatesOnly:(BOOL)a2;
- (id)handleGestureEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithGestureID:(id)a0;

@end
