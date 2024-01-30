@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer {
    double _startTime;
    BOOL _hasSufficientForce;
}

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)reset;

@end
