@interface AGXBuffer : IOGPUMetalBuffer <AGXResource>

- (id)initWithDevice:(id)a0 iosurface:(struct __IOSurface { } *)a1;
- (id)initWithHeap:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 atOffset:(unsigned long long)a3;
- (id)initUntrackedInternalBufferWithDevice:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initWithHeap:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 isSuballocDisabled:(BOOL)a3 resourceInArgs:(struct AGXNewTextureDataStruc { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; union { struct { unsigned char x0 : 1; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 2; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 4; unsigned char x10 : 4; unsigned char x11 : 4; unsigned char x12 : 1; unsigned char x13 : 3; unsigned char x14 : 2; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; } x0; unsigned long long x1; } x1; unsigned long long x2; } *)a4;
- (id)initCounterSampleBufferWithDevice:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initImplWithHeap:(id)a0 resource:(id)a1 length:(unsigned long long)a2 atOffset:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 bytes:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 deallocator:(id /* block */)a4;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 isSuballocDisabled:(BOOL)a3;
- (id)backingResource;
- (id)initInternalBufferWithDevice:(id)a0 length:(unsigned long long)a1 options:(unsigned long long)a2;

@end
