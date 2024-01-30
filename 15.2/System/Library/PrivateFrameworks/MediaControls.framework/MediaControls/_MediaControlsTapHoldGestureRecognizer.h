@interface _MediaControlsTapHoldGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _startingLocation;
}

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
