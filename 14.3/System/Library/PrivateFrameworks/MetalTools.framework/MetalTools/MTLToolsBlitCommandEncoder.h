@class NSString;
@protocol MTLDevice;

@interface MTLToolsBlitCommandEncoder : MTLToolsCommandEncoder <MTLBlitCommandEncoder>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copyFromBuffer:(id)a0 sourceOffset:(unsigned long long)a1 sourceBytesPerRow:(unsigned long long)a2 sourceBytesPerImage:(unsigned long long)a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8;
- (void)copyFromBuffer:(id)a0 sourceOffset:(unsigned long long)a1 toBuffer:(id)a2 destinationOffset:(unsigned long long)a3 size:(unsigned long long)a4;
- (void)fillBuffer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 value:(unsigned char)a2;
- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;
- (void)copyFromTexture:(id)a0 toTexture:(id)a1;
- (void)optimizeContentsForGPUAccess:(id)a0;
- (void)optimizeContentsForCPUAccess:(id)a0;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toBuffer:(id)a5 destinationOffset:(unsigned long long)a6 destinationBytesPerRow:(unsigned long long)a7 destinationBytesPerImage:(unsigned long long)a8;
- (void)generateMipmapsForTexture:(id)a0;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 toTexture:(id)a3 destinationSlice:(unsigned long long)a4 destinationLevel:(unsigned long long)a5 sliceCount:(unsigned long long)a6 levelCount:(unsigned long long)a7;
- (void)synchronizeResource:(id)a0;
- (void)synchronizeTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)optimizeContentsForGPUAccess:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)optimizeContentsForCPUAccess:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)resetCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)copyIndirectCommandBuffer:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destination:(id)a2 destinationIndex:(unsigned long long)a3;
- (void)optimizeIndirectCommandBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resolveCounters:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3;
- (void)copyFromBuffer:(id)a0 sourceOffset:(unsigned long long)a1 sourceBytesPerRow:(unsigned long long)a2 sourceBytesPerImage:(unsigned long long)a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8 options:(unsigned long long)a9;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toBuffer:(id)a5 destinationOffset:(unsigned long long)a6 destinationBytesPerRow:(unsigned long long)a7 destinationBytesPerImage:(unsigned long long)a8 options:(unsigned long long)a9;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8 options:(unsigned long long)a9;
- (void)getTextureAccessCounters:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 mipLevel:(unsigned long long)a2 slice:(unsigned long long)a3 resetCounters:(BOOL)a4 countersBuffer:(id)a5 countersBufferOffset:(unsigned long long)a6;
- (void)resetTextureAccessCounters:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 mipLevel:(unsigned long long)a2 slice:(unsigned long long)a3;
- (id)initWithBlitCommandEncoder:(id)a0 parent:(id)a1 descriptor:(id)a2;

@end
