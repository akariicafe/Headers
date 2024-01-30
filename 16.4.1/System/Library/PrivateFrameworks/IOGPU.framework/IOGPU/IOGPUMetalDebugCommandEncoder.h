@class MTLResourceList;

@interface IOGPUMetalDebugCommandEncoder : _MTLDebugCommandEncoder {
    void *_kernelCommandBufferCurrent;
    void *_kernelCommandBufferEnd;
    struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } *_resourceList;
    MTLResourceList *_api_resourceList;
}

- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)dealloc;
- (void *)reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (void)IOLogBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)addAPIResource:(id)a0;
- (unsigned int)addDebugResourceListInfo:(struct IOGPUResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } *)a0 flag:(unsigned int)a1;
- (void)debugBytes:(const char *)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)restartDebugPass;

@end
