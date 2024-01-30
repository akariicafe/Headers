@class IOGPUMetalBuffer, IOGPUMetalResource;

@interface IOGPUMetalTexture : IOGPUMetalResource {
    IOGPUMetalTexture *_parentTexture;
    IOGPUMetalBuffer *_buffer;
    unsigned int _swizzle;
    BOOL _writeSwizzleEnabled;
    IOGPUMetalBuffer *_primaryBuffer;
    short _primaryHeapIndex;
    short _primaryBufferIndex;
    unsigned long long _primaryBufferOffset;
    unsigned long long _length;
    unsigned long long _bufferOffset;
    unsigned long long _bufferBytesPerRow;
    void *_pointer;
    id /* block */ _deallocator;
}

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) IOGPUMetalResource *rootResource;
@property (readonly) IOGPUMetalTexture *parentTexture;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) IOGPUMetalBuffer *buffer;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long rotation;
@property (readonly) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } swizzle;
@property (readonly) unsigned int swizzleKey;
@property (readonly) BOOL isCompressed;
@property (readonly) long long compressionFeedback;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long usage;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long depth;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long numFaces;
@property (readonly, getter=isShareable) BOOL shareable;
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property (readonly) BOOL isDrawable;
@property (readonly) BOOL rootResourceIsSuballocatedBuffer;
@property (readonly) BOOL allowGPUOptimizedContents;
@property (readonly, nonatomic) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;

+ (void)initNewTextureDataWithDevice:(id)a0 descriptor:(id)a1 sysMemSize:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a6;

- (id)initWithDevice:(id)a0 descriptor:(id)a1 iosurface:(struct __IOSurface { } *)a2 plane:(unsigned int)a3 field:(unsigned int)a4 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a5 argsSize:(unsigned int)a6;
- (id)initWithHeap:(id)a0 resource:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 device:(id)a4 descriptor:(id)a5;
- (struct __CFArray { } *)copyAnnotations;
- (long long)compressionFeedback;
- (id)initWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)initWithCompressedTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 level:(unsigned long long)a3 slice:(unsigned long long)a4;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 sysMemOffset:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a6 argsSize:(unsigned int)a7 isStrideTexture:(BOOL)a8;
- (id)initWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a5;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 sysMemPointer:(void *)a2 sysMemSize:(unsigned long long)a3 sysMemLength:(unsigned long long)a4 sysMemRowBytes:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a6 argsSize:(unsigned int)a7 deallocator:(id /* block */)a8;
- (void)replaceRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0 mipmapLevel:(unsigned long long)a1 withBytes:(const void *)a2 bytesPerRow:(unsigned long long)a3;
- (id)initWithPrimaryBuffer:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4 descriptor:(id)a5 sysMemRowBytes:(unsigned long long)a6 vidMemSize:(unsigned long long)a7 vidMemRowBytes:(unsigned long long)a8 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a9 argsSize:(unsigned int)a10;
- (BOOL)isAliasable;
- (unsigned long long)hazardTrackingMode;
- (void)_setLabel:(id)a0;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3;
- (void)makeAliasable;
- (id)initWithTexture:(id)a0 pixelFormat:(unsigned long long)a1;
- (id)newSharedTextureHandle;
- (BOOL)isSparse;
- (id)initWithTextureInternal:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a5 compressedView:(BOOL)a6;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 sysMemOffset:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a6 argsSize:(unsigned int)a7;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 sysMemSize:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a6 argsSize:(unsigned int)a7;
- (void)copyFromSlice:(unsigned long long)a0 mipmapLevel:(unsigned long long)a1 origin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 toPixels:(void *)a4 rowBytes:(unsigned long long)a5 imageBytes:(unsigned long long)a6;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (void)copyFromPixels:(const void *)a0 rowBytes:(unsigned long long)a1 imageBytes:(unsigned long long)a2 toSlice:(unsigned long long)a3 mipmapLevel:(unsigned long long)a4 origin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6;
- (void)getBytes:(void *)a0 bytesPerRow:(unsigned long long)a1 fromRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipmapLevel:(unsigned long long)a3;

@end
