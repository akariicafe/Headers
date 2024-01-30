@interface ETPointFIFO : NSObject

@property (retain, nonatomic) ETPointFIFO *nextFIFO;

- (void)flush;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithFIFO:(id)a0;
- (void)addPoints:(void *)a0 count:(unsigned long long)a1;
- (void)emitPoints:(void *)a0 count:(unsigned long long)a1;

@end
