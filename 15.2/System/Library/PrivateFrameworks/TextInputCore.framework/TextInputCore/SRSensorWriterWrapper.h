@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

+ (id)writerInstance;

- (BOOL)isReady;
- (void)write:(id)a0;
- (void)writeSessionSamples:(id)a0;

@end
