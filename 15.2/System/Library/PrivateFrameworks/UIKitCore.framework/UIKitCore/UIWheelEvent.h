@class NSMutableArray;

@interface UIWheelEvent : UIEvent {
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (long long)subtype;
- (void)_sendEventToResponder:(id)a0;
- (BOOL)_canHaveVelocity;
- (double)_wheelVelocity;
- (void).cxx_destruct;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (long long)type;

@end
