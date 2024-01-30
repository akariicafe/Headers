@class NSMutableArray;

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (nonatomic) unsigned long long width;

- (void)clear;
- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1;
- (void)flush;

@end
