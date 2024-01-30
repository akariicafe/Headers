@class NSMutableArray;

@interface UIWheelEvent : UIEvent {
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (long long)subtype;
- (long long)type;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (double)_wheelVelocity;
- (void)_sendEventToResponder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canHaveVelocity;

@end
