@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer {
    double _startTime;
    BOOL _hasSufficientForce;
}

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
