@class UIBezierPath, NSMutableArray;

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (retain, nonatomic) UIBezierPath *path;
@property (copy) id /* block */ emissionHandler;

- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (id)initWithFIFO:(id)a0;

@end
