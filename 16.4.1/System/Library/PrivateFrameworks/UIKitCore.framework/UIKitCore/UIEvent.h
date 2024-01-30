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
    BOOL _isInteractionBehaviorInactive;
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

- (id)_windows;
- (void)_wasDeliveredToGestureRecognizers;
- (long long)_modifierFlags;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)predictedTouchesForTouch:(id)a0;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (id)_init;
- (id)touchesForView:(id)a0;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)_cleanupAfterDispatch;
- (int)_shakeState;
- (BOOL)_isPhysicalKeyEvent;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (BOOL)_consumeBeforeDeliveryToGestureRecognizers:(id)a0 inWindow:(id)a1;
- (void)dealloc;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_unmodifiedInput;
- (double)_wheelVelocity;
- (id)_screen;
- (id)coalescedTouchesForTouch:(id)a0;
- (void)_sendEventToResponder:(id)a0;
- (id)_touchesForGestureRecognizer:(id)a0;
- (id)_modifiedInput;
- (id)touchesForWindow:(id)a0;
- (id)touchesForGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)_initWithEnvironment:(id)a0;
- (BOOL)_isKeyDown;
- (id)_triggeringPhysicalButton;
- (id)_cloneEvent;
- (long long)_buttonMask;
- (unsigned long long)_clickCount;
- (unsigned long long)_focusHeading;
- (struct __GSEvent { } *)_gsEvent;
- (struct __IOHIDEvent { } *)_hidEvent;
- (BOOL)_isInteractionBehaviorInactive;
- (BOOL)_isTouchRoutingPolicyBased;
- (long long)_keyModifierFlags;
- (long long)_moveDirection;
- (void)_setGSEvent:(struct __GSEvent { } *)a0;

@end
