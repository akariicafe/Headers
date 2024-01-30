@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) TIHandwritingStrokes *strokes;

- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithFIFO:(id)a0;
- (id)scaleStrokes:(double)a0;

@end
