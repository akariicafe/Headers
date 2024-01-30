@class NSMutableArray;

@interface MTLCountersTraceCommandBuffer : NSObject {
    struct BinaryBuffer { void /* function */ **_vptr$AppendBuffer; struct StreamBuffer { char *bytes; char *pWrite; char *pEnd; } stream; struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase; } _commands;
    NSMutableArray *_encoders;
    struct AppendBuffer { void /* function */ **_vptr$AppendBuffer; struct StreamBuffer { char *bytes; char *pWrite; char *pEnd; } stream; } _samples;
    unsigned long long _flags;
    unsigned long long _timestamp;
}

- (id)init:(BOOL)a0;
- (void)presentDrawable:(id)a0;
- (void)waitUntilScheduled;
- (id).cxx_construct;
- (void)presentDrawable:(id)a0 atTime:(double)a1;
- (void)waitUntilCompleted;
- (id)computeCommandEncoder;
- (void)dealloc;
- (id)blitCommandEncoder;
- (id)resourceStateCommandEncoder;
- (id)renderCommandEncoder;
- (void)appendSamples:(const void *)a0 length:(unsigned long long)a1;
- (void)saveCommandBuffer:(const void *)a0 queue:(id)a1 profilingResults:(id)a2;

@end
