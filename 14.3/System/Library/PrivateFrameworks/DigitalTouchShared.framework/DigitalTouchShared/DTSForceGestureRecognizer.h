@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer {
    double _startTime;
    BOOL _hasSufficientForce;
}

- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
