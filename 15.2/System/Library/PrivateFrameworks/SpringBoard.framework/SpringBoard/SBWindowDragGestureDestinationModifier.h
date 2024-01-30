@class CADisplayLink, SBSwitcherModifierEventResponse, SBAppLayout;
@protocol SBWindowDragGestureDestinationModifierDelegate;

@interface SBWindowDragGestureDestinationModifier : SBSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    SBAppLayout *_initialAppLayout;
    SBAppLayout *_initialFloatingAppLayout;
    long long _initialFloatingConfiguration;
    unsigned long long _gesturePhase;
    BOOL _supportsMedusa;
    BOOL _supportsCenterRole;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
    CADisplayLink *_displayLink;
    unsigned long long _dragPauseCounter;
    BOOL _isResizingToFullScreen;
    BOOL _hasResizedEnoughToUnblur;
    id<SBWindowDragGestureDestinationModifierDelegate> _dragDestinationDelegate;
    SBSwitcherModifierEventResponse *_pendingEnterPlatterZoneResponse;
}

@property (readonly, nonatomic, getter=hasEnteredPlatterZone) BOOL enteredPlatterZone;
@property (readonly, nonatomic) unsigned long long currentDestination;
@property (readonly, nonatomic) SBAppLayout *currentAppLayout;
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout;

- (void)_displayLinkFired:(id)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void)didMoveToParentModifier:(id)a0;
- (void).cxx_destruct;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)_updateForWindowDrag;
- (void)_updateCurrentDropAction;
- (id)_transitionResponseForDestination:(unsigned long long)a0 complete:(BOOL)a1;
- (id)handleResizeProgressEvent:(id)a0;
- (double)_contentDraggingCommandeerWidth;
- (BOOL)_draggingFullScreenApp;
- (BOOL)_isDragOverFullscreenRegionAtLocation:(struct CGPoint { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_layoutRoleForDraggedApp;
- (BOOL)_isDragOverSideGutterRegionsAtLocation:(struct CGPoint { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 totalContentDragGutterWidth:(double)a2;
- (BOOL)_draggingSplitViewApp;
- (BOOL)_draggingCenterWindow;
- (double)_contentDraggingFloatingActivationWidth;
- (struct CGSize { double x0; double x1; })_fullscreenActivationRegionSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_universalCenterZone;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftFloatingZoneForCenterWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightFloatingZoneForCenterWindow;
- (double)_sideActivationGutterSize;
- (BOOL)_draggingSlideOverApp;
- (BOOL)_shouldMinimizeOrEnterSplitHomeScreen;
- (double)_dismissRightBoundary;
- (double)_dismissLeftBoundary;
- (id)_insertSelectedAppLayout:(id)a0 intoAppLayout:(id)a1 inRole:(long long)a2 configuration:(long long)a3 centerConfiguration:(long long)a4;
- (id)initWithSelectedAppLayout:(id)a0 initialAppLayout:(id)a1 initialFloatingAppLayout:(id)a2 initialFloatingConfiguration:(long long)a3 delegate:(id)a4;
- (double)_contentDraggingSideActivationWidth;

@end
