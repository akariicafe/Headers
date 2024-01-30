@interface MTLIOAccelBuffer : MTLIOAccelResource {
    void *_pointer;
    id /* block */ _deallocator;
    MTLIOAccelBuffer *_masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    unsigned long long _masterBufferOffset;
    unsigned long long _length;
}

@property (readonly) unsigned long long length;
@property (readonly, nonatomic) void *contents;
@property (readonly) struct __IOSurface { } *iosurface;

- (id)formattedDescription:(unsigned long long)a0;
- (struct __CFArray { } *)copyAnnotations;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (void)dealloc;
- (id)initWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 sysMemSize:(unsigned long long)a4 vidMemSize:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6 argsSize:(unsigned int)a7 deallocator:(id /* block */)a8;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllDebugMarkers;
- (id)initWithDevice:(id)a0 iosurface:(struct __IOSurface { } *)a1 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a2 argsSize:(unsigned int)a3;
- (id)initWithHeap:(id)a0 resource:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3;
- (id)description;
- (id)initWithMasterBuffer:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a5 argsSize:(unsigned int)a6;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
