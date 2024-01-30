@class UIScreen, NSSet, UIEventEnvironment, NSMutableSet;

@interface UIEvent : NSObject {
    struct __GSEvent { } *_gsEvent;
    struct __IOHIDEvent { } *_hidEvent;
    long long _mzModifierFlags;
    unsigned long long _mzClickCount;
    long long _buttonMask;
    UIScreen *_cachedScreen;
    NSMutableSet *_eventObservers;
    BOOL _hasValidModifiers;
    UIEventEnvironment *_eventEnvironment;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;
@property (readonly, nonatomic) unsigned long long _inputPrecision;
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) long long trackpadFingerDownCount;
@property (readonly, nonatomic) double _initialTouchTimestamp;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) long long buttonMask;
@property (readonly, nonatomic) NSSet *allTouches;

+ (unsigned long long)_inputPrecisionForTouches:(id)a0;

- (long long)_modifierFlags;
- (id)_windows;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (void)_sendEventToResponder:(id)a0;
- (id)_cloneEvent;
- (id)touchesForView:(id)a0;
- (id)touchesForWindow:(id)a0;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (struct __IOHIDEvent { } *)_hidEvent;
- (void)dealloc;
- (BOOL)_isPhysicalKeyEvent;
- (id)predictedTouchesForTouch:(id)a0;
- (id)_unmodifiedInput;
- (id)coalescedTouchesForTouch:(id)a0;
- (struct __GSEvent { } *)_gsEvent;
- (BOOL)_isKeyDown;
- (int)_shakeState;
- (void)_wasDeliveredToGestureRecognizers;
- (long long)_buttonMask;
- (id)_init;
- (id)_screen;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (double)_wheelVelocity;
- (id)_triggeringPhysicalButton;
- (id)_modifiedInput;
- (unsigned long long)_clickCount;
- (unsigned long long)_focusHeading;
- (id)_touchesForGestureRecognizer:(id)a0;
- (void)_setGSEvent:(struct __GSEvent { } *)a0;
- (void)_cleanupAfterDispatch;
- (id)_initWithEnvironment:(id)a0;
- (BOOL)_isTouchRoutingPolicyBased;
- (long long)_keyModifierFlags;
- (id)_gestureRecognizersForWindow:(id)a0;
- (id)touchesForGestureRecognizer:(id)a0;
- (long long)_moveDirection;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;

@end
