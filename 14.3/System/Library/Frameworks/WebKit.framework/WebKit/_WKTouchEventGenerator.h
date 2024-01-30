@class NSMutableDictionary;

@interface _WKTouchEventGenerator : NSObject {
    struct __IOHIDEventSystemClient { } *_ioSystemClient;
    struct { int identifier; struct CGPoint { double x; double y; } point; double pathMajorRadius; double pathPressure; unsigned char pathProximity; } _activePoints[5];
    unsigned long long _activePointCount;
}

@property (retain, nonatomic) NSMutableDictionary *eventCallbacks;

+ (long long)nextEventCallbackID;
+ (id)sharedTouchEventGenerator;

- (id)init;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (struct __IOHIDEvent { } *)_createIOHIDEventType:(int)a0;
- (BOOL)_sendHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1;
- (void)liftUpAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1;
- (void)_updateTouchPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1;
- (BOOL)_sendMarkerHIDEventWithCompletionBlock:(id /* block */)a0;
- (void)moveToPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 duration:(double)a2;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 completionBlock:(id /* block */)a2;
- (void)receivedHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
