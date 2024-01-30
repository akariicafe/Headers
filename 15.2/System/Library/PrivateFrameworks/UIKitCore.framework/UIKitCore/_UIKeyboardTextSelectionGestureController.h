@class _UIStatesFeedbackGenerator, UIDelayedAction, NSMutableArray, UITextMagnifierTimeWeightedPoint;
@protocol _UIKeyboardTextSelectionGestureControllerDelegate;

@interface _UIKeyboardTextSelectionGestureController : NSObject {
    NSMutableArray *_deallocHandlers;
}

@property (nonatomic) struct CGPoint { double x; double y; } lastPanTranslation;
@property (nonatomic) struct CGPoint { double x; double y; } accumulatedAcceleration;
@property (nonatomic) struct CGPoint { double x; double y; } accumulatedBounding;
@property (nonatomic) double lastPressTimestamp;
@property (retain, nonatomic) UITextMagnifierTimeWeightedPoint *weightedPoint;
@property (nonatomic) double twoFingerTapTimestamp;
@property (nonatomic) long long previousRepeatedGranularity;
@property (nonatomic) long long panGestureState;
@property (nonatomic) BOOL wasScrollingEnabled;
@property (nonatomic) BOOL wasNestedPinchingDisabled;
@property (nonatomic) BOOL suppressTwoFingerPan;
@property (nonatomic) BOOL didSuppressSelectionGrabbers;
@property (nonatomic) BOOL isLongPressing;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) BOOL isSpacePan;
@property (nonatomic) BOOL hadAddedTouch;
@property (nonatomic) double spacePanDistance;
@property (retain, nonatomic) NSMutableArray *activeGestures;
@property (nonatomic) BOOL didFloatCursor;
@property (nonatomic) struct CGPoint { double x; double y; } cursorLocationBase;
@property (retain, nonatomic) UIDelayedAction *tapLogTimer;
@property (nonatomic) int previousForcePressCount;
@property (retain, nonatomic) UIDelayedAction *longForcePressAction;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour;
@property (nonatomic) id<_UIKeyboardTextSelectionGestureControllerDelegate> delegate;

+ (id)sharedInstance;

- (id)selectionController;
- (BOOL)oneFingerForcePressShouldCancelTouchesInView;
- (id)addTwoFingerTextSelectionInteractionsToView:(id)a0;
- (id)addOneFingerTextSelectionInteractionsToView:(id)a0;
- (BOOL)shouldAddForceGesture;
- (double)oneFingerForcePressAllowableMovement;
- (void)_cleanupDeadGesturesIfNecessary;
- (void)didRemoveSelectionController;
- (double)oneFingerForcePressMinimumDuration;
- (id)addLongPressTextSelectionInteractionsToView:(id)a0;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (id)addDeallocationHandler:(id /* block */)a0;
- (void)redisableEnclosingScrollViewNestedPinching;
- (void)configureTwoFingerPanGestureRecognizer:(id)a0;
- (id)init;
- (void)dealloc;
- (void)configureTwoFingerTapGestureRecognizer:(id)a0;
- (void)enableEnclosingScrollViewNestedPinching;
- (BOOL)allowOneFingerDeepPress;
- (void)willRemoveSelectionController;
- (Class)textInteractionClass;
- (void)configureOneFingerForcePressRecognizer:(id)a0;
- (void)removeDeallocationHandler:(id)a0;
- (BOOL)_longPressAllowedForView:(id)a0;

@end
