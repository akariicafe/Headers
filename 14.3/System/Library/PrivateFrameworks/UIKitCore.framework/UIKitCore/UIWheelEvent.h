@class NSMutableArray;

@interface UIWheelEvent : UIEvent {
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (long long)subtype;
- (void)_sendEventToResponder:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (double)_wheelVelocity;
- (BOOL)_canHaveVelocity;

@end
