@interface UIPanGestureVelocitySample : NSObject {
    struct CGPoint { double x; double y; } start;
    struct CGPoint { double x; double y; } end;
    double dt;
}

@end
