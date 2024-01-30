@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) TIHandwritingStrokes *strokes;

- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (id)initWithFIFO:(id)a0;

@end
