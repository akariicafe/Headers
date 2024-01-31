@class NSArray;

@interface CoreAudioKit.CAAUEQGraphView : CoreAudioKit.CAAUGraphView {
    void /* unknown type, empty encoding */ controlList;
    void /* unknown type, empty encoding */ paramCache;
    void /* unknown type, empty encoding */ accessibleElements;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ curve;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ activePointIndex;
    void /* unknown type, empty encoding */ drawActivePointOnly;
    void /* unknown type, empty encoding */ plotActiveRangeOnly;
    void /* unknown type, empty encoding */ touchedParts;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)tintColorDidChange;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)handleBeginGestureWithNotification:(id)a0;
- (void)handleEndGestureWithNotification:(id)a0;

@end
