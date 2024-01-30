@class MTLResourceList;

@interface IOGPUMetalDebugCommandEncoder : _MTLDebugCommandEncoder {
    void *_kernelCommandBufferCurrent;
    void *_kernelCommandBufferEnd;
    struct IOGPUResourceList { unsigned short x0[256]; struct IOGPUSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } *_resourceList;
    MTLResourceList *_api_resourceList;
}

- (id)initWithCommandBuffer:(id)a0;
- (void)dealloc;
- (void)IOLogBytes:(const char *)a0 length:(unsigned long long)a1;
- (unsigned int)addDebugResourceListInfo:(struct IOGPUResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } *)a0 flag:(unsigned int)a1;
- (void)debugBytes:(const char *)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)restartDebugPass;
- (void *)reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (void)addAPIResource:(id)a0;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)endEncoding;

@end
