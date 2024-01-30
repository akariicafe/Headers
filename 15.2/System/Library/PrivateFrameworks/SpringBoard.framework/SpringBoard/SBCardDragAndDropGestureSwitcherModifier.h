@class SBCardDropSwitcherModifier, NSUUID, SBAppLayout, SBSwitcherDropRegionContext;

@interface SBCardDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_draggingAppLayout;
    long long _draggingLayoutRole;
    SBAppLayout *_draggingLeafAppLayout;
    SBAppLayout *_intersectingAppLayout;
    long long _intersectingLayoutRole;
    SBAppLayout *_intersectingLeafAppLayout;
    SBAppLayout *_previouslyIntersectingAppLayout;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _location;
    BOOL _gestureEnded;
    BOOL _isScrolling;
    NSUUID *_gestureID;
    SBSwitcherDropRegionContext *_dropRegionContext;
    unsigned long long _currentDropRegion;
    SBCardDropSwitcherModifier *_dropModifier;
}

- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleKillable:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (BOOL)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)a0;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForLayoutRole:(long long)a0 inAppLayout:(id)a1 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;
- (unsigned long long)blurTargetPreferenceForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)shouldShowBackdropViewAtIndex:(unsigned long long)a0;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)handleScrollEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (id)handleSwitcherDropEvent:(id)a0;
- (id)handleBlurProgressEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullyPresentedFrameForLayoutRole:(long long)a0 inAppLayout:(id)a1;

@end
