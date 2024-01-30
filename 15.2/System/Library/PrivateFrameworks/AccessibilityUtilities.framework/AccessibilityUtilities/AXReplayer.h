@interface AXReplayer : NSObject

+ (id)replayer;

- (void)replayWithName:(id)a0 attempts:(long long)a1 interval:(double)a2 async:(BOOL)a3 queue:(id)a4 replayBlock:(id /* block */)a5 completion:(id /* block */)a6;

@end
