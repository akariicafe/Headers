@class MTLIOAccelBuffer;
@protocol MTLTexture, MTLBuffer, MTLResource;

@interface MTLIOAccelTexture : MTLIOAccelResource {
    MTLIOAccelTexture *_parentTexture;
    MTLIOAccelBuffer *_buffer;
    unsigned int _swizzle;
    BOOL _writeSwizzleEnabled;
    MTLIOAccelBuffer *_masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    unsigned long long _masterBufferOffset;
    unsigned long long _length;
    unsigned long long _bufferOffset;
    unsigned long long _bufferBytesPerRow;
    void *_pointer;
    id /* block */ _deallocator;
}

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) id<MTLResource> rootResource;
@property (readonly) id<MTLTexture> parentTexture;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) id<MTLBuffer> buffer;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
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

+ (void)initNewTextureDataWithDevice:(id)a0 descriptor:(id)a1 sysMemSize:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6;

- (id)formattedDescription:(unsigned long long)a0;
- (struct __CFArray { } *)copyAnnotations;
- (void)getBytes:(void *)a0 bytesPerRow:(unsigned long long)a1 fromRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipmapLevel:(unsigned long long)a3;
- (id)initWithHeap:(id)a0 resource:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 device:(id)a4 descriptor:(id)a5;
- (void)dealloc;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 sysMemOffset:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6 argsSize:(unsigned int)a7;
- (id)initWithTexture:(id)a0 pixelFormat:(unsigned long long)a1;
- (id)initWithCompressedTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 level:(unsigned long long)a3 slice:(unsigned long long)a4;
- (BOOL)isSparse;
- (id)initWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a5;
- (id)description;
- (id)newSharedTextureHandle;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 iosurface:(struct __IOSurface { } *)a2 plane:(unsigned int)a3 field:(unsigned int)a4 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a5 argsSize:(unsigned int)a6;
- (void)replaceRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0 mipmapLevel:(unsigned long long)a1 withBytes:(const void *)a2 bytesPerRow:(unsigned long long)a3;
- (void)copyFromPixels:(const void *)a0 rowBytes:(unsigned long long)a1 imageBytes:(unsigned long long)a2 toSlice:(unsigned long long)a3 mipmapLevel:(unsigned long long)a4 origin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6;
- (void)makeAliasable;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 sysMemPointer:(void *)a2 sysMemSize:(unsigned long long)a3 sysMemLength:(unsigned long long)a4 sysMemRowBytes:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6 argsSize:(unsigned int)a7 deallocator:(id /* block */)a8;
- (id)initWithMasterBuffer:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4 descriptor:(id)a5 sysMemRowBytes:(unsigned long long)a6 vidMemSize:(unsigned long long)a7 vidMemRowBytes:(unsigned long long)a8 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a9 argsSize:(unsigned int)a10;
- (long long)compressionFeedback;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 sysMemOffset:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6 argsSize:(unsigned int)a7 isStrideTexture:(BOOL)a8;
- (unsigned long long)hazardTrackingMode;
- (id)initWithTextureInternal:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a5 compressedView:(BOOL)a6;
- (void)copyFromSlice:(unsigned long long)a0 mipmapLevel:(unsigned long long)a1 origin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 toPixels:(void *)a4 rowBytes:(unsigned long long)a5 imageBytes:(unsigned long long)a6;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 sysMemSize:(unsigned long long)a2 sysMemRowBytes:(unsigned long long)a3 vidMemSize:(unsigned long long)a4 vidMemRowBytes:(unsigned long long)a5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a6 argsSize:(unsigned int)a7;
- (id)initWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)isAliasable;

@end
