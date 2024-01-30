@interface APLatencyVisualizationLayer : CALayer {
    double _dotOffset;
    double _dotDiameter;
    double _dotSpeed;
    double _dotSpeedX;
    double _dotSpeedY;
    void *_timeContext;
    void /* function */ *_getAbsoluteTime;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)init:(void /* function */ *)a0 timeContext:(void *)a1 zPosition:(int)a2;

@end
