@class NSMapTable;

@interface UIHoverEvent : UIEvent {
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
}

@property (nonatomic) BOOL hasOutstandingUpdates;
@property (nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) BOOL _pointerLocked;

- (id)_gestureRecognizersForWindow:(id)a0;
- (id)_windows;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_pointerStateDidChange:(id)a0;
- (void)setNeedsHitTestResetForWindow:(id)a0;
- (id)hoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (long long)subtype;
- (id)touchesForWindow:(id)a0;
- (unsigned long long)_inputPrecision;
- (void)removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (void)_setNeedsUpdateForWindow:(id)a0 forcingHitTest:(BOOL)a1;
- (id)allTouches;
- (void)_cancelAllGestureRecognizers;
- (void)setNeedsUpdateForWindow:(id)a0;
- (id)touchesForView:(id)a0;
- (void)removeHoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (void)_windowDidDetachContext:(id)a0;
- (void).cxx_destruct;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (id)_init;
- (id)touchesForGestureRecognizer:(id)a0;
- (void)setHoverTouch:(id)a0 forContextId:(unsigned int)a1 pathIndex:(long long)a2;
- (long long)type;
- (void)dealloc;
- (id)_touchesByContextId:(unsigned int)a0 createIfNeeded:(BOOL)a1;
- (void)_windowDidBecomeHidden:(id)a0;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)a0;
- (void)_completelyRemoveHoverTouchAndDeliveryTableForContextIdNumber:(id)a0;

@end
