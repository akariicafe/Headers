@class UITapGestureRecognizer, NSTimer;

@interface TVRStandardTouchProcessor : TVRTouchProcessor {
    long long _clickVirtualizerState;
    struct CGPoint { double x; double y; } _touchBeganLocation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSTimer *_clickVirtualizerTimer;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_tap:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_touchpadClickVirtualizerTimerFired:(id)a0;
- (void)setTouchpadView:(id)a0;

@end
