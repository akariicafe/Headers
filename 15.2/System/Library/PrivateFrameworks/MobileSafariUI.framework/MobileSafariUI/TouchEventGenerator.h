@interface TouchEventGenerator : NSObject {
    struct __IOHIDEventSystemClient { } *_ioSystemClient;
    struct { int identifier; struct CGPoint { double x; double y; } point; double pathMajorRadius; double pathPressure; unsigned char pathProximity; } _activePoints[5];
    unsigned long long _activePointCount;
}

+ (id)sharedTouchEventGenerator;

- (void)liftUp:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1;
- (void)_updateTouchPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id)init;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1;
- (void)moveToPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 duration:(double)a2;
- (struct __IOHIDEvent { } *)_createIOHIDEventType:(int)a0;
- (BOOL)_sendHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0;
- (void)touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1;
- (void)liftUpAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0;

@end
