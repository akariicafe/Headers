@interface IOGPUMetalBuffer : IOGPUMetalResource {
    void *_pointer;
    id /* block */ _deallocator;
    IOGPUMetalBuffer *_primaryBuffer;
    short _primaryHeapIndex;
    short _primaryBufferIndex;
    unsigned long long _primaryBufferOffset;
    unsigned long long _length;
}

@property (readonly) unsigned long long length;
@property (readonly, nonatomic) void *contents;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly) unsigned long long allocatedSize;

- (struct __CFArray { } *)copyAnnotations;
- (id)initWithDevice:(id)a0 iosurface:(struct __IOSurface { } *)a1 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *)a2 argsSize:(unsigned int)a3;
- (id)initWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 sysMemSize:(unsigned long long)a4 vidMemSize:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *)a6 argsSize:(unsigned int)a7 deallocator:(id /* block */)a8;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllDebugMarkers;
- (id)initWithHeap:(id)a0 resource:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3;
- (id)formattedDescription:(unsigned long long)a0;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (id)initWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 sysMemSize:(unsigned long long)a4 gpuAddress:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *)a6 argsSize:(unsigned int)a7 deallocator:(id /* block */)a8;
- (id)initWithPrimaryBuffer:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *)a5 argsSize:(unsigned int)a6;

@end
