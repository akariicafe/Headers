@interface CHPointFIFO : NSObject

@property (retain, nonatomic) CHPointFIFO *nextFIFO;

- (void)flush;
- (void)clear;
- (void)emitPoint:(SEL)a0;
- (void)addPoint:(SEL)a0;
- (void)dealloc;
- (id)initWithFIFO:(id)a0;

@end
