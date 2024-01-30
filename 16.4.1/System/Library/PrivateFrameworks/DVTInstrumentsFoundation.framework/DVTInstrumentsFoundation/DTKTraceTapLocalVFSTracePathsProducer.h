@interface DTKTraceTapLocalVFSTracePathsProducer : NSObject <DTKTraceTapLocalEventProducer>

+ (BOOL)supportsConfig:(id)a0;

- (void)pause;
- (void)stop;
- (id)init;
- (void)start;
- (void)unpause;
- (void)_emitVFSDump;

@end
