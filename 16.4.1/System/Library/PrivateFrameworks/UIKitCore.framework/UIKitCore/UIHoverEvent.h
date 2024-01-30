@class NSMapTable, NSMutableSet;

@interface UIHoverEvent : UIEvent {
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
    NSMutableSet *_touchesWithOutstandingUpdates;
    double _maximumPositionZ;
    double _hoverAzimuthAngle;
    double _hoverAltitudeAngle;
    double _positionZ;
}

@property (readonly, nonatomic) BOOL hasOutstandingUpdates;
@property (nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) BOOL _pointerLocked;

- (id)_windows;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (long long)subtype;
- (void)_cancelAllGestureRecognizers;
- (void)_completelyRemoveHoverTouchesForWindow:(id)a0 contextIdNumber:(id)a1 withCancellation:(BOOL)a2;
- (void)setNeedsUpdateForWindow:(id)a0;
- (long long)type;
- (id)_init;
- (id)touchesForView:(id)a0;
- (id)hoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)setNeedsHitTestResetForWindow:(id)a0;
- (void)_windowDidBecomeHidden:(id)a0;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (id)_touchesByContextId:(unsigned int)a0 createIfNeeded:(BOOL)a1;
- (void)dealloc;
- (void)_windowDidDetachContext:(id)a0;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_cancelAllGestureRecognizersAndRemoveAllHoverTouches;
- (void)_setNeedsUpdateForWindow:(id)a0 forcingHitTest:(BOOL)a1;
- (id)allTouches;
- (void)_pointerStateDidChange:(id)a0;
- (void)removeHoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)a0;
- (void)_resetHasOutstandingUpdateTouches;
- (unsigned long long)_inputPrecision;
- (id)touchesForWindow:(id)a0;
- (void)_addHasOutstandingUpdateTouch:(id)a0;
- (id)touchesForGestureRecognizer:(id)a0;
- (void)_removeAllHoverTouchesForContextId:(unsigned int)a0;
- (void)removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)setHoverTouch:(id)a0 forContextId:(unsigned int)a1 pathIndex:(long long)a2;

@end
