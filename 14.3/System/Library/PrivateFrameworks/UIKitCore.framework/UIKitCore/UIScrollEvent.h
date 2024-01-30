@class BKSHIDEventPointerAttributes, NSMapTable;

@interface UIScrollEvent : UIEvent {
    NSMapTable *_gestureRecognizersByWindow;
    struct CGPoint { double x; double y; } _sceneReferenceLocation;
    unsigned long long _lastDeliveredPhase;
    unsigned long long _lastReceivedPhase;
    BKSHIDEventPointerAttributes *_pointerAttributes;
}

@property (readonly, nonatomic, getter=_scrollType) unsigned long long scrollType;
@property (readonly, nonatomic, getter=_isHighResolution) BOOL highResolution;
@property (readonly, nonatomic, getter=_scrollDeviceCategory) unsigned long long scrollDeviceCategory;
@property (readonly, nonatomic, getter=_beganScrollTimestamp) double beganScrollTimestamp;
@property (readonly) struct CGVector { double x0; double x1; } acceleratedDelta;
@property (readonly) struct CGVector { double x0; double x1; } nonAcceleratedDelta;
@property (readonly) BOOL directionInvertedFromDevice;
@property (readonly) unsigned long long phase;

- (id)_windows;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (long long)subtype;
- (void)_removeGestureRecognizersFromWindows;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)_hasDeliveredTerminalPhase;
- (void)_wasDeliveredToGestureRecognizers;
- (void)_removeGestureRecognizer:(id)a0;
- (id)_windowServerHitTestWindow;
- (long long)type;
- (id)_init;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)_sendCancelToGestureRecognizer:(id)a0;

@end
