@class NSMutableDictionary;

@interface _WKTouchEventGenerator : NSObject {
    struct RetainPtr<__IOHIDEventSystemClient *> { void *m_ptr; } _ioSystemClient;
    struct { int identifier; struct CGPoint { double x; double y; } point; double pathMajorRadius; double pathPressure; unsigned char pathProximity; } _activePoints[5];
    unsigned long long _activePointCount;
}

@property (retain, nonatomic) NSMutableDictionary *eventCallbacks;

+ (long long)nextEventCallbackID;
+ (id)sharedTouchEventGenerator;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __IOHIDEvent { } *)_createIOHIDEventType:(int)a0;
- (BOOL)_sendHIDEvent:(struct __IOHIDEvent { } *)a0 window:(id)a1;
- (BOOL)_sendMarkerHIDEventInWindow:(id)a0 completionBlock:(id /* block */)a1;
- (void)_updateTouchPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 window:(id)a2;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1 window:(id)a2;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0 window:(id)a1 completionBlock:(id /* block */)a2;
- (void)liftUpAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 window:(id)a2;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 window:(id)a2 completionBlock:(id /* block */)a3;
- (void)moveToPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 duration:(double)a2 window:(id)a3;
- (void)receivedHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1 window:(id)a2;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0 window:(id)a1 completionBlock:(id /* block */)a2;
- (void)touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 window:(id)a2;

@end
