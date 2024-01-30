@class NSSet, NSMutableSet, NSMapTable;

@interface UITouchesEvent : UIEvent {
    NSMutableSet *_allTouchesMutable;
    NSSet *_allTouchesImmutableCached;
    struct __CFDictionary { } *_keyedTouches;
    struct __CFDictionary { } *_keyedTouchesByWindow;
    struct __CFDictionary { } *_gestureRecognizersByWindow;
    NSMapTable *_latentSystemGestureWindows;
    struct __CFDictionary { } *_coalescedTouches;
    struct __CFDictionary { } *_finalTouches;
    BOOL _isCallingEventObservers;
    NSMutableSet *_exclusiveTouchWindows;
}

@property (readonly, nonatomic) double _initialTouchTimestamp;
@property (nonatomic) long long singleAllowableExternalTouchPathIndex;
@property (readonly, nonatomic, getter=_containsHIDPointerEvent) BOOL containsHIDPointerEvent;

- (id)_gestureRecognizersForWindow:(id)a0;
- (id)_windows;
- (void)_removeTouch:(id)a0;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)_cloneEvent;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)a0;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (void)_clearTouches;
- (id)_viewsForWindow:(id)a0;
- (id)touchesForWindow:(id)a0;
- (unsigned long long)_inputPrecision;
- (void)_invalidateGestureRecognizerForWindowCache;
- (id)coalescedTouchesForTouch:(id)a0;
- (void)_clearViewForTouch:(id)a0;
- (void)_moveCoalescedTouchesFromHidEvent:(struct __IOHIDEvent { } *)a0 toHidEvent:(struct __IOHIDEvent { } *)a1;
- (id)_touchesForKey:(id)a0;
- (id)allTouches;
- (id)_touchesForView:(id)a0 withPhase:(long long)a1;
- (void)_collectGestureRecognizersForView:(id)a0 withBlock:(id /* block */)a1;
- (void)_moveTouchesFromView:(id)a0 toView:(id)a1;
- (void)_removeTouchesForWindow:(id)a0;
- (void)_removeTouchesForKey:(id)a0;
- (id)description;
- (void)_removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (id)touchesForView:(id)a0;
- (void)_addGestureRecognizersForView:(id)a0 toTouch:(id)a1;
- (id)_allTouches;
- (void)_touchesForGesture:(id)a0 withPhase:(long long)a1 intoSet:(id)a2;
- (id)_touchesForGestureRecognizer:(id)a0;
- (void)_addTouch:(id)a0 forDelayedDelivery:(BOOL)a1;
- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (id)_rawCoalescedTouchesForTouch:(id)a0;
- (id)_touchesForGesture:(id)a0 withPhase:(long long)a1;
- (id)_init;
- (void)_addGestureRecognizersForTouchContinuationInView:(id)a0 toTouch:(id)a1;
- (id)touchesForGestureRecognizer:(id)a0;
- (id)_exclusiveTouchWindows;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)a0 deliveredToEventWindow:(id)a1;
- (BOOL)_anyInterestedGestureRecognizersForTouchInView:(id)a0;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (long long)type;
- (id)predictedTouchesForTouch:(id)a0;
- (void)_addCoalescedTouch:(id)a0 forIndex:(long long)a1 hidEvent:(struct __IOHIDEvent { } *)a2;
- (void)dealloc;
- (id)_touchesForWindow:(id)a0;
- (void)_addGestureRecognizersForView:(id)a0 toTouch:(id)a1 forContinuation:(BOOL)a2;
- (id)_firstTouchForView:(id)a0;
- (struct __CFDictionary { } *)_coalescedTouchesForHidEvent:(struct __IOHIDEvent { } *)a0;
- (id)_lastPendingCoalescedTouchForIndex:(long long)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (double)_initialTouchTimestampForWindow:(id)a0;

@end
