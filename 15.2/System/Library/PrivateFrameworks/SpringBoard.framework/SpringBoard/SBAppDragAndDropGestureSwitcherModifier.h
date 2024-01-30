@class NSString, SBDragAndDropToAppTransitionSwitcherModifier, SBAppLayout;

@interface SBAppDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    BOOL _floatingSwitcherVisible;
    SBAppLayout *_initialFullScreenAppLayout;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_dropTransitionFromAppLayout;
    SBDragAndDropToAppTransitionSwitcherModifier *_transitionModifier;
    long long _dropAction;
    NSString *_draggedSceneIdentifier;
    BOOL _isWindowDrag;
    BOOL _hasPlatterized;
    BOOL _hasPreviewLifted;
    long long _draggedSceneOriginalLayoutRole;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _platterFrame;
    struct CGPoint { double x; double y; } _location;
    BOOL _shouldPushInFullScreenContent;
    BOOL _isResizing;
    BOOL _hasResizedEnoughToUnblur;
    BOOL _isBlurring;
    BOOL _isBlurred;
    BOOL _needsBlurBecauseFramesWillMismatch;
    BOOL _gestureEnded;
}

- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)switcherHitTestsAsOpaque;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)handleGestureEvent:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (void)_recomputeBlurStateWithCompletion:(id /* block */)a0;
- (id)handleBlurProgressEvent:(id)a0;
- (BOOL)_showResizeUI;
- (id)initWithGestureID:(id)a0 floatingSwitcherVisible:(BOOL)a1 fullScreenAppLayout:(id)a2;
- (BOOL)_shouldPushInFullScreenContentForEvent:(id)a0;
- (BOOL)_isDraggingLiveWindow;

@end
