@protocol _UITrackingGestureRecognizerDelegate;

@interface _UITrackingGestureRecognizer : UIGestureRecognizer {
    struct { unsigned char touchInside : 1; unsigned char touchDragged : 1; } _flags;
}

@property (weak, nonatomic) id<_UITrackingGestureRecognizerDelegate> trackingDelegate;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)sendControlEvent:(unsigned long long)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
