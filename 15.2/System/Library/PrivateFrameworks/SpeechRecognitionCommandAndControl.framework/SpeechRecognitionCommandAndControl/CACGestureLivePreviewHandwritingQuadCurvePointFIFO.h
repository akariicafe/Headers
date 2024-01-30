@class NSMutableArray;

@interface CACGestureLivePreviewHandwritingQuadCurvePointFIFO : CACGestureLivePreviewHandwritingPointFIFO

@property (nonatomic) double scale;
@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (nonatomic) struct { struct CGPoint { double x; double y; } point; double force; } lastPoint;
@property (copy) id /* block */ emissionHandler;

- (void)flush;
- (void)clear;
- (id)initWithFIFO:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;

@end
