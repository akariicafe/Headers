@interface CACGestureLivePreviewHandwritingPointFIFO : NSObject

@property (retain, nonatomic) CACGestureLivePreviewHandwritingPointFIFO *nextFIFO;

- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (void)emitPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (id)initWithFIFO:(id)a0;

@end
