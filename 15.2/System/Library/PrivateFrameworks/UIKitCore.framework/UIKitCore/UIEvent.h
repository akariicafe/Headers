@class UIScreen, NSSet, UIEventEnvironment, BKSHIDEventAuthenticationMessage, NSMutableSet;

@interface UIEvent : NSObject {
    struct __GSEvent { } *_gsEvent;
    struct __IOHIDEvent { } *_hidEvent;
    BOOL _hasValidModifiers;
    long long _mzModifierFlags;
    unsigned long long _mzClickCount;
    long long _buttonMask;
    UIScreen *_cachedScreen;
    NSMutableSet *_eventObservers;
    UIEventEnvironment *_eventEnvironment;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;
@property (readonly, nonatomic) unsigned long long _inputPrecision;
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) long long trackpadFingerDownCount;
@property (readonly, nonatomic) double _initialTouchTimestamp;
@property (readonly, nonatomic) BKSHIDEventAuthenticationMessage *_authenticationMessage;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) long long buttonMask;
@property (readonly, nonatomic) NSSet *allTouches;

+ (unsigned long long)_inputPrecisionForTouches:(id)a0;

- (id)_gestureRecognizersForWindow:(id)a0;
- (long long)_modifierFlags;
- (id)_windows;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_cleanupAfterDispatch;
- (id)_cloneEvent;
- (int)_shakeState;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (id)_unmodifiedInput;
- (BOOL)_isPhysicalKeyEvent;
- (id)touchesForWindow:(id)a0;
- (struct __IOHIDEvent { } *)_hidEvent;
- (id)coalescedTouchesForTouch:(id)a0;
- (struct __GSEvent { } *)_gsEvent;
- (void)_sendEventToResponder:(id)a0;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_initWithEnvironment:(id)a0;
- (BOOL)_isTouchRoutingPolicyBased;
- (long long)_keyModifierFlags;
- (id)touchesForView:(id)a0;
- (BOOL)_consumeBeforeDeliveryToGestureRecognizers:(id)a0 inWindow:(id)a1;
- (double)_wheelVelocity;
- (id)_touchesForGestureRecognizer:(id)a0;
- (long long)_buttonMask;
- (id)_triggeringPhysicalButton;
- (void).cxx_destruct;
- (id)_modifiedInput;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (unsigned long long)_focusHeading;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (id)_init;
- (unsigned long long)_clickCount;
- (id)touchesForGestureRecognizer:(id)a0;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_isKeyDown;
- (id)predictedTouchesForTouch:(id)a0;
- (void)dealloc;
- (void)_setGSEvent:(struct __GSEvent { } *)a0;
- (id)_screen;
- (long long)_moveDirection;

@end
