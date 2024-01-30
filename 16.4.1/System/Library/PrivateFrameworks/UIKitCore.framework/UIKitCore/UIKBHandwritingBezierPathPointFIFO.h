@class UIBezierPath, NSMutableArray;

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (retain, nonatomic) UIBezierPath *path;
@property (copy) id /* block */ emissionHandler;

- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithFIFO:(id)a0;

@end
