@class MTLResourceList;

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder {
    void *_kernelCommandBufferCurrent;
    void *_kernelCommandBufferEnd;
    struct IOAccelResourceList { unsigned short x0[256]; struct IOAccelSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } *_resourceList;
    MTLResourceList *_api_resourceList;
}

- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;
- (void)dealloc;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)IOLogBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)restartDebugPass;
- (void *)reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (unsigned int)addDebugResourceListInfo:(struct IOAccelResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } *)a0 flag:(unsigned int)a1;
- (void)debugBytes:(const char *)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)debugResourceBytes:(unsigned int)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)addAPIResource:(id)a0;
- (void)kprintfResource:(unsigned int)a0 length:(unsigned int)a1;
- (void)IOLogResource:(unsigned int)a0 length:(unsigned int)a1;

@end
