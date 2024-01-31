@interface AGXA10FamilyTexture : AGXTexture {
    void *_impl;
}

- (unsigned long long)colorSpaceConversionMatrix;
- (unsigned long long)resourceIndex;
- (long long)compressionFeedback;
- (unsigned long long)firstMipmapInTail;
- (void)dealloc;
- (void)updateBindDataWithAddresses:(void *)a0 gpuVirtualAddress:(unsigned long long)a1;
- (void)replaceRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0 mipmapLevel:(unsigned long long)a1 slice:(unsigned long long)a2 withBytes:(const void *)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (BOOL)isSparse;
- (BOOL)initImplWithTexture:(id)a0 pixelFormat:(unsigned long long)a1;
- (BOOL)updateBindDataWithCompressedTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 level:(unsigned long long)a3 slice:(unsigned long long)a4;
- (unsigned long long)tailSize;
- (BOOL)validateBufferTextureWithSize:(unsigned long long)a0;
- (unsigned long long)tailSizeInBytes;
- (unsigned long long)sparseSurfaceDefaultValue;
- (void)finalizeTextureCreation;
- (BOOL)isMemoryless;
- (void)updateBindDataWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)initImplWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 swizzle:(unsigned int)a5 resourceIndex:(unsigned long long)a6;
- (BOOL)initImplWithCompressedTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 level:(unsigned long long)a3 resourceIndex:(unsigned long long)a4;
- (BOOL)initImplWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (void)setSparseHeap:(id)a0;
- (void)generateMipmapLevel:(unsigned long long)a0 slice:(unsigned long long)a1;
- (void)getBytes:(void *)a0 bytesPerRow:(unsigned long long)a1 bytesPerImage:(unsigned long long)a2 fromRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 mipmapLevel:(unsigned long long)a4 slice:(unsigned long long)a5;
- (void)finalizeCompressedTextureViewCreation;
- (void)updateBindDataWithAddresses:(void *)a0 gpuVirtualAddress:(unsigned long long)a1 shouldInitMetadata:(BOOL)a2;
- (void)initNewTextureData:(struct AGXNewTextureDataStruc { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { unsigned int x0; unsigned long long x1; } x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; union { struct { unsigned char x0 : 1; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 2; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 4; unsigned char x10 : 4; unsigned char x11 : 4; unsigned char x12 : 1; unsigned char x13 : 3; unsigned char x14 : 2; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned int x20 : 26; } x0; unsigned long long x1; } x1; unsigned long long x2; } *)a0;
- (unsigned long long)compressionFootprint;
- (unsigned long long)uniqueIdentifier;
- (BOOL)initImplWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)canGenerateMipmapLevels;
- (void)updateBindDataWithAddresses:(void *)a0 cpuMetadataAddress:(void *)a1 gpuVirtualAddress:(unsigned long long)a2 isCompressible:(BOOL)a3 shouldInitMetadata:(BOOL)a4;
- (BOOL)initImplWithCompressedTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 level:(unsigned long long)a3;
- (BOOL)initImplWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 swizzle:(unsigned int)a5;
- (BOOL)initImplWithTexture:(id)a0 pixelFormat:(unsigned long long)a1 textureType:(unsigned long long)a2 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 resourceIndex:(unsigned long long)a5;
- (BOOL)initImplWithDevice:(id)a0 Descriptor:(id)a1 iosurface:(struct __IOSurface { } *)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4 buffer:(id)a5 bytesPerRow:(unsigned long long)a6 allowNPOT:(BOOL)a7 sparsePageSize:(unsigned long long)a8 isCompressedIOSurface:(BOOL)a9 isHeapBacked:(BOOL)a10;

@end
