@class NSMapTable;

@interface UIHoverEvent : UIEvent {
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
}

@property (nonatomic) BOOL hasOutstandingUpdates;
@property (nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) BOOL _pointerLocked;

- (id)_windows;
- (long long)subtype;
- (void)removeHoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (id)touchesForView:(id)a0;
- (id)hoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (id)touchesForWindow:(id)a0;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)_pointerStateDidChange:(id)a0;
- (unsigned long long)_inputPrecision;
- (void)dealloc;
- (void)_completelyRemoveHoverTouchAndDeliveryTableForContextIdNumber:(id)a0;
- (void)_windowDidDetachContext:(id)a0;
- (void)_cancelAllGestureRecognizers;
- (void)setNeedsHitTestResetForWindow:(id)a0;
- (void)_windowDidBecomeHidden:(id)a0;
- (long long)type;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)a0;
- (id)_init;
- (void)_setNeedsUpdateForWindow:(id)a0 forcingHitTest:(BOOL)a1;
- (void)setNeedsUpdateForWindow:(id)a0;
- (id)allTouches;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)setHoverTouch:(id)a0 forContextId:(unsigned int)a1 pathIndex:(long long)a2;
- (id)touchesForGestureRecognizer:(id)a0;
- (id)_touchesByContextId:(unsigned int)a0 createIfNeeded:(BOOL)a1;
- (void)removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;

@end
