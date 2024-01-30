@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer

@property (readonly, nonatomic) MTLCountersTraceCommandBuffer *traceBuffer;

- (void)waitUntilScheduled;
- (id)resourceStateCommandEncoderWithDescriptor:(id)a0;
- (id)computeCommandEncoderWithDescriptor:(id)a0;
- (void)presentDrawable:(id)a0 atTime:(double)a1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)presentDrawable:(id)a0;
- (id)blitCommandEncoderWithDescriptor:(id)a0;
- (void)waitUntilCompleted;
- (void)addPurgedResource:(id)a0;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (void)addPurgedHeap:(id)a0;
- (void)dealloc;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (id)resourceStateCommandEncoder;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)initWithCommandBuffer:(id)a0 commandQueue:(id)a1;

@end
