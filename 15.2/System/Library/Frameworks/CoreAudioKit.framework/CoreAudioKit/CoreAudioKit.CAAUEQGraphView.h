@interface CoreAudioKit.CAAUEQGraphView : CoreAudioKit.CAAUGraphView {
    void /* unknown type, empty encoding */ controlList;
    void /* unknown type, empty encoding */ paramCache;
    void /* unknown type, empty encoding */ curve;
    void /* unknown type, empty encoding */ activePointIndex;
    void /* unknown type, empty encoding */ drawActivePointOnly;
    void /* unknown type, empty encoding */ plotActiveRangeOnly;
    void /* unknown type, empty encoding */ touchedParts;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ dataSource;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)removeFromSuperview;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)graphView;
- (id)addPointControlFor:(unsigned int)a0 for:(unsigned int)a1;
- (id)addRegionControlFor:(unsigned int)a0 width:(unsigned int)a1;
- (void)updateViewFor:(unsigned int)a0 value:(float)a1;
- (void)redrawCurve;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })graphFrame;
- (float)valueForXWithLocation:(double)a0;
- (id)addRegionControlFor:(unsigned int)a0 y:(unsigned int)a1 width:(unsigned int)a2;
- (void)handleBeginGestureWithNotification:(id)a0;
- (void)handleEndGestureWithNotification:(id)a0;
- (float)valueForYWithLocation:(double)a0;

@end
