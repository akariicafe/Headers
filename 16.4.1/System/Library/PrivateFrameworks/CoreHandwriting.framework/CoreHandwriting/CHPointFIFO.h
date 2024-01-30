@interface CHPointFIFO : NSObject

@property (retain, nonatomic) CHPointFIFO *nextFIFO;

- (void)addPoint:(SEL)a0;
- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
