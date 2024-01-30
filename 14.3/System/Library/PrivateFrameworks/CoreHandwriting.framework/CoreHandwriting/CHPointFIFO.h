@interface CHPointFIFO : NSObject

@property (retain, nonatomic) CHPointFIFO *nextFIFO;

- (void)clear;
- (void)addPoint:(SEL)a0;
- (void)dealloc;
- (void)flush;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
