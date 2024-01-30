@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

- (void)clear;
- (void)addPoint:(SEL)a0;
- (void)dealloc;
- (void)flush;
- (id)initWithFIFO:(id)a0;

@end
