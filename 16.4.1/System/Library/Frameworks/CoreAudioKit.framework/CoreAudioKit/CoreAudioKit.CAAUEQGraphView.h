@class NSArray;

@interface CoreAudioKit.CAAUEQGraphView : CoreAudioKit.CAAUGraphView {
    void /* unknown type, empty encoding */ controlList;
    void /* unknown type, empty encoding */ paramCache;
    void /* unknown type, empty encoding */ accessibleElements;
    void /* unknown type, empty encoding */ curve;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ activePointIndex;
    void /* unknown type, empty encoding */ drawActivePointOnly;
    void /* unknown type, empty encoding */ plotActiveRangeOnly;
    void /* unknown type, empty encoding */ touchedParts;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ dataSource;
@property (nonatomic, copy) NSArray *accessibilityElements;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)removeFromSuperview;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)graphView;
- (id)addPointControlFor:(unsigned int)a0 for:(unsigned int)a1;
- (id)addRegionControlFor:(unsigned int)a0 width:(unsigned int)a1;
- (id)addRegionControlFor:(unsigned int)a0 width:(unsigned int)a1 useTrianglesForWidth:(BOOL)a2;
- (id)addRegionControlFor:(unsigned int)a0 y:(unsigned int)a1 width:(unsigned int)a2;
- (id)addRegionControlFor:(unsigned int)a0 y:(unsigned int)a1 width:(unsigned int)a2 useTrianglesForWidth:(BOOL)a3;
- (void)changeControlToHorizontalPointWithIndex:(long long)a0;
- (void)changeControlToHorizontalPointWithIndex:(long long)a0 width:(unsigned int)a1;
- (void)changeControlToPointWithIndex:(long long)a0 y:(unsigned int)a1;
- (void)changeControlToRegionWithIndex:(long long)a0 y:(unsigned int)a1 width:(unsigned int)a2;
- (void)disableAllControls;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })graphFrame;
- (void)handleBeginGestureWithNotification:(id)a0;
- (void)handleEndGestureWithNotification:(id)a0;
- (void)redrawCurve;
- (void)setActiveControl:(long long)a0;
- (void)setBypassed:(long long)a0 bypassed:(BOOL)a1;
- (void)updateViewFor:(unsigned int)a0 value:(float)a1;
- (float)valueForXWithLocation:(double)a0;
- (float)valueForYWithLocation:(double)a0;

@end
