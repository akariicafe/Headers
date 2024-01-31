@interface Charts.ChartDragGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ startLocations;
    void /* unknown type, empty encoding */ currentLocations;
    void /* unknown type, empty encoding */ isDirectTouch;
    void /* unknown type, empty encoding */ minimumPressDuration;
    void /* unknown type, empty encoding */ initialFirstTouch;
    void /* unknown type, empty encoding */ initialSecondTouch;
    void /* unknown type, empty encoding */ timer;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
