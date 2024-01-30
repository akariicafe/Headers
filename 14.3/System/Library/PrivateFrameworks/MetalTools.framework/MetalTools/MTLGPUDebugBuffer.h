@interface MTLGPUDebugBuffer : MTLToolsBuffer {
    unsigned long long bufferIndex;
    unsigned long long _offset;
    unsigned long long _length;
    struct GPUDebugBufferDescriptorHeap { struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x0; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } x1; struct vector<MTLGPUDebugBuffer *, std::__1::allocator<MTLGPUDebugBuffer *> > { id *x0; id *x1; struct __compressed_pair<MTLGPUDebugBuffer **, std::__1::allocator<MTLGPUDebugBuffer *> > { id *x0; } x2; } x2; unsigned long long x3; id x4; id x5; } *_descriptorHeap;
}

@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long gpuAddress;

- (unsigned long long)length;
- (void *)contents;
- (void)dealloc;
- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (id)initWithBuffer:(id)a0 device:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 track:(BOOL)a4;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 track:(BOOL)a5;
- (id)initWithBuffer:(id)a0 device:(id)a1;
- (id)initWithBuffer:(id)a0 device:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2;

@end
