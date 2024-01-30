@class UITapGestureRecognizer, NSTimer;

@interface TVRStandardTouchProcessor : TVRTouchProcessor {
    long long _clickVirtualizerState;
    struct CGPoint { double x; double y; } _touchBeganLocation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSTimer *_clickVirtualizerTimer;
}

- (void)_tap:(id)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setTouchpadView:(id)a0;
- (void)_touchpadClickVirtualizerTimerFired:(id)a0;

@end
