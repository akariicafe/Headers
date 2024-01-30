@class UIViewSpringAnimationBehavior, NSArray, NSString, UIBezierPath, UIView, UIPanGestureRecognizer, _UIVelocityIntegrator;
@protocol _UIContextMenuPanControllerDelegate;

@interface _UIContextMenuPanController : NSObject <UIGestureRecognizerDelegate, _UIContextMenuScrollObservationInteractionDelegate> {
    unsigned long long _currentDetentIndex;
    double _initialYTranslation;
    UIBezierPath *_menuScrubPath;
    double _currentDistanceToMenuScrubPath;
    struct CGPoint { double x; double y; } _initialLocationInsidePreview;
    BOOL _menuViewIsVisible;
    BOOL _touchEverEnteredMenu;
    BOOL _clientAllowsDismissal;
}

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (readonly, nonatomic) UIViewSpringAnimationBehavior *animationBehavior;
@property (weak, nonatomic) id<_UIContextMenuPanControllerDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSArray *detents;
@property (nonatomic) struct CGPoint { double x; double y; } originalPlatterCenter;
@property (nonatomic) struct CGPoint { double x; double y; } originalMenuCenter;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } menuAnchor;
@property (nonatomic) unsigned long long rubberbandingEdges;
@property (retain, nonatomic) NSArray *accessoryViews;
@property (weak, nonatomic) UIView *menuView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (BOOL)_canBeginDraggingWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (double)_tearOffSpeedMultiplier;
- (int)_nearestDetentWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateForGestureWithState:(long long)a0 translation:(struct CGPoint { double x0; double x1; })a1 location:(struct CGPoint { double x0; double x1; })a2 allowsDragging:(BOOL)a3;
- (void)_updateViewPositionsWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1 ended:(BOOL)a2 withVelocity:(BOOL)a3;
- (void)_updateMenuScrubPathWithLocationIfNecessary:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGVector { double x0; double x1; })_currentPlatterVelocity;
- (void)_updatePlatterGestureDebugUIWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1 invalidate:(BOOL)a2;
- (void)scrollObservationInteraction:(id)a0 willBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateForSignificantLayoutChange;
- (void)scrollObservationInteraction:(id)a0 didUpdateWithTranslation:(struct CGPoint { double x0; double x1; })a1 location:(struct CGPoint { double x0; double x1; })a2 ended:(BOOL)a3;
- (BOOL)_canSwipeDownToDismiss;
- (void).cxx_destruct;
- (void)moveToDetentPosition:(long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_initialPointInPlatterIsValid;
- (void)_animationsForAnyAttachedAccessoryViews;
- (void)_animationsForActionsStyleWithLocation:(struct CGPoint { double x0; double x1; })a0 ended:(BOOL)a1;
- (void)_handlePanGesture:(id)a0;
- (double)_dragTearOffThreshold;
- (double)_rangeOfMotion;
- (id)initWithContainerView:(id)a0 platterView:(id)a1 menuView:(id)a2;
- (struct CGPoint { double x0; double x1; })_rubberBandedTranslationForGestureTranslation:(struct CGPoint { double x0; double x1; })a0;

@end
