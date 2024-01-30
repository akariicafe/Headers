@interface UIPointFIFO : NSObject

@property (retain, nonatomic) UIPointFIFO *nextFIFO;

- (void)addPoint:(SEL)a0;
- (void)flush;
- (void)dealloc;
- (void)clear;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
