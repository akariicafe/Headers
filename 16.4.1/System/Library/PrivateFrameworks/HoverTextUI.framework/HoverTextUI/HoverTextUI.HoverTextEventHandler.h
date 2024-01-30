@interface HoverTextUI.HoverTextEventHandler : NSObject <AXUIEventHandler> {
    void /* unknown type, empty encoding */ elementAtPointerDidChange;
    void /* unknown type, empty encoding */ azimuthDidChange;
    void /* unknown type, empty encoding */ stylusMoved;
    void /* unknown type, empty encoding */ activationLockSequenceOccurred;
    void /* unknown type, empty encoding */ activationButtonPressed;
    void /* unknown type, empty encoding */ activationButtonReleased;
    void /* unknown type, empty encoding */ previousHoverElement;
    void /* unknown type, empty encoding */ lastMouseEventTime;
    void /* unknown type, empty encoding */ pointerEventStreams;
    void /* unknown type, empty encoding */ currentStylusAzimuthForElement;
    void /* unknown type, empty encoding */ activationKey;
    void /* unknown type, empty encoding */ lastStylusEventTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventProcessor;
    void /* unknown type, empty encoding */ previousKeyModifierState;
    void /* unknown type, empty encoding */ activationKeyPressCount;
    void /* unknown type, empty encoding */ activationKeyPressIsActive;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activationKeyHoldTimer;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)handlePointerEvent:(id)a0;

@end
