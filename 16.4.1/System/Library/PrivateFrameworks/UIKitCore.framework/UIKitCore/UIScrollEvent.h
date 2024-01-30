@class NSMapTable, NSMutableSet, BKSHIDEventPointerAttributes, UIGestureRecognizer;
@protocol _UIScrollEventAsyncDeliveryTarget;

@interface UIScrollEvent : UIEvent {
    NSMapTable *_gestureRecognizersByWindow;
    struct CGPoint { double x; double y; } _sceneReferenceLocation;
    unsigned long long _lastDeliveredPhase;
    unsigned long long _lastReceivedPhase;
    BKSHIDEventPointerAttributes *_pointerAttributes;
    id<_UIScrollEventAsyncDeliveryTarget> _asyncDeliveryTarget;
    UIGestureRecognizer *_asyncDeliveryGesture;
    BOOL _isDoingAsyncDelivery;
    BOOL _isCloneForAsyncDelivery;
    NSMutableSet *_outstandingSnapshotEventsForAsyncDelivery;
    BOOL _isStiflingDeltas;
    BOOL _hasSimulatedMomentumDelta;
    struct CGVector { double dx; double dy; } _simulatedMomentumDelta;
}

@property (readonly, nonatomic, getter=_scrollType) unsigned long long scrollType;
@property (readonly, nonatomic, getter=_isHighResolution) BOOL highResolution;
@property (readonly, nonatomic, getter=_scrollDeviceCategory) unsigned long long scrollDeviceCategory;
@property (readonly, nonatomic, getter=_beganScrollTimestamp) double beganScrollTimestamp;
@property (readonly, nonatomic, getter=_stifledDelta) struct CGVector { double dx; double dy; } stifledDelta;
@property (readonly) struct CGVector { double x0; double x1; } acceleratedDelta;
@property (readonly) struct CGVector { double x0; double x1; } nonAcceleratedDelta;
@property (readonly) BOOL directionInvertedFromDevice;
@property (readonly) unsigned long long phase;

- (id)_windows;
- (void)_wasDeliveredToGestureRecognizers;
- (BOOL)_shouldSendEvent;
- (struct CGVector { double x0; double x1; })_adjustedAcceleratedDeltaInView:(id)a0;
- (void)_removeGestureRecognizer:(id)a0;
- (void)_sendCancelToGestureRecognizer:(id)a0;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_simulateMomentumWithDelta:(struct CGVector { double x0; double x1; })a0 inView:(id)a1;
- (id)_windowServerHitTestWindow;
- (long long)subtype;
- (void)_beginStiflingDeltas;
- (long long)type;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPointFromSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
- (struct CGVector { double x0; double x1; })_adjustedDeltaForPanWithAcceleration:(BOOL)a0 honoringScrollDirectionPreference:(BOOL)a1;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)_removeGestureRecognizersFromWindows;
- (void)_cleanupAfterDispatch;
- (struct CGVector { double x0; double x1; })_convertDeltaFromHIDDeviceSpaceToSceneReferenceSpaceIfNeeded:(struct CGVector { double x0; double x1; })a0;
- (BOOL)_consumeBeforeDeliveryToGestureRecognizers:(id)a0 inWindow:(id)a1;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_hasDeliveredTerminalPhase;
- (void)_endStiflingDeltas;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertPointToSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (void).cxx_destruct;
- (id)_cloneEvent;

@end
