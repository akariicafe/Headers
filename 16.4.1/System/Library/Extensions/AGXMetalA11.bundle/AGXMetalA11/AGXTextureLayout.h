@class NSString;

@interface AGXTextureLayout : IOGPUMetalTextureLayout <MTLTextureLayout> {
    void *_impl;
}

@property (readonly) unsigned long long size;
@property (readonly) unsigned long long alignment;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } copyGranularity;
@property (readonly) struct { unsigned long long x0[2]; } watermark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finalizeTextureMemory:(void *)a0;
- (void)copyFromLinearBytes:(const void *)a0 linearOffset:(unsigned long long)a1 linearBytesPerRow:(unsigned long long)a2 linearBytesPerImage:(unsigned long long)a3 toTextureMemory:(void *)a4 textureSlice:(unsigned long long)a5 textureLevel:(unsigned long long)a6 textureRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a7;
- (void)dealloc;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 isHeapOrBufferBacked:(BOOL)a2;
- (void)initializeTextureMemory:(void *)a0;
- (void)copyFromTextureMemory:(const void *)a0 textureSlice:(unsigned long long)a1 textureLevel:(unsigned long long)a2 textureRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 toLinearBytes:(void *)a4 linearOffset:(unsigned long long)a5 linearBytesPerRow:(unsigned long long)a6 linearBytesPerImage:(unsigned long long)a7;

@end
