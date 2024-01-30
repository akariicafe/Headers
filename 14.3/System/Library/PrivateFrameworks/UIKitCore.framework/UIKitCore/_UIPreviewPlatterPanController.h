@class UIViewSpringAnimationBehavior, NSArray, NSString, UIBezierPath, UIView, UIPanGestureRecognizer, _UIVelocityIntegrator;
@protocol _UIPreviewPlatterPanControllerDelegate;

@interface _UIPreviewPlatterPanController : NSObject <UIGestureRecognizerDelegate> {
    unsigned long long _currentDetentIndex;
    double _initialYTranslation;
    UIBezierPath *_actionScrubPath;
    double _currentDistanceToActionScrubPath;
    struct CGPoint { double x; double y; } _initialLocationInsidePreview;
    BOOL _actionsViewIsVisible;
    BOOL _touchEverEnteredMenu;
}

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *platterView;
@property (weak, nonatomic) UIView *actionsView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (readonly, nonatomic) UIViewSpringAnimationBehavior *animationBehavior;
@property (weak, nonatomic) id<_UIPreviewPlatterPanControllerDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSArray *detents;
@property (nonatomic) unsigned long long initialDetentIndex;
@property (nonatomic) struct CGPoint { double x; double y; } originalPlatterCenter;
@property (nonatomic) struct CGPoint { double x; double y; } originalActionsCenter;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; } menuAnchor;
@property (nonatomic) unsigned long long rubberbandingEdges;
@property (retain, nonatomic) NSArray *accessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateViewPositionsWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1 ended:(BOOL)a2 withVelocity:(BOOL)a3;
- (void).cxx_destruct;
- (void)_updatePlatterGestureDebugUIWithGesture:(id)a0 invalidate:(BOOL)a1;
- (void)_updateActionScrubPathWithLocationIfNecessary:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_rubberBandedTranslationForGestureTranslation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithContainerView:(id)a0 platterView:(id)a1 actionsView:(id)a2;
- (void)_animationsForActionsStyleWithLocation:(struct CGPoint { double x0; double x1; })a0 ended:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (double)_rangeOfMotion;
- (double)_dragTearOffThreshold;
- (void)_handlePanGesture:(id)a0;
- (BOOL)_canSwipeDownToDismiss;
- (struct CGVector { double x0; double x1; })_currentPlatterVelocity;
- (int)_nearestDetentWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_canBeginDraggingWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (double)_tearOffSpeedMultiplier;
- (void)_animationsForAnyAttachedAccessoryViews;
- (BOOL)_initialPointInPlatterIsValid;

@end
