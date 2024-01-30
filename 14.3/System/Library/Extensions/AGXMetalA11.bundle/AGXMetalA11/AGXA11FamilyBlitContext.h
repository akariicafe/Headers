@class NSString;
@protocol MTLDevice;

@interface AGXA11FamilyBlitContext : IOGPUMetalBlitCommandEncoder <MTLBlitCommandEncoderSPI> {
    struct BlitContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses> { struct BlitDispatchContext { void /* function */ **x0; struct DataBufferAllocator { struct DataBufferConfig *x0; id x1; struct IOGPUMetalCommandBufferResourceInfo *x2; struct IOGPUResourceList *x3; struct DataBufferInfo { char *x0; char *x1; char *x2; char *x3; unsigned long long x4; } x4[21]; int x5; } x1; id x2; id x3; id x4; id x5; struct IOGPUResourceList *x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0; BOOL x1; unsigned int x2; unsigned int x3; } x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; BOOL x16; struct IOGPUKernelCommand *x17; void *x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; struct ResourceGroupUsage *x22; struct ContextSwitcher { } x23; struct BlitUSCStateLoader { struct USCPDMResourceSpecEncoderGen1<kAGXRevG10> { union _AgxCrUscPdmRsrcSpec { unsigned long long x0; struct { unsigned char x0 : 6; unsigned char x1 : 5; unsigned long x2 : 53; } x1; } x0; } x0; } x24; struct Terminator { struct TerminateToken { union _AgxPppStateHeader { unsigned int x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 2; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 4; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 2; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 5; } x1; } x0; union _Terminate0 { unsigned int x0; struct { unsigned short x0 : 9; unsigned short x1 : 9; unsigned short x2 : 9; unsigned char x3 : 5; } x1; } x1; union _Terminate1 { unsigned int x0; struct { unsigned short x0 : 11; unsigned short x1 : 12; unsigned short x2 : 9; } x1; } x2; } x0; struct TerminateToken { union _AgxVdmctrlStreamTerminate { unsigned int x0; struct { unsigned char x0 : 1; unsigned int x1 : 28; unsigned char x2 : 3; } x1; } x0; } x1; } x25; struct AGXComputeCommandRec *x26; struct SpillInfo { struct SpillConfig { unsigned int x0; } x0; id x1; struct DeviceInternalBuffer<AGX::USCSpillBufferResourceInfo> *x2; BOOL x3; } x27; struct DMASpillBufferDescriptor *x28; unsigned long long x29; struct FenceList *x30; struct FenceList *x31; struct BlitCounterSamplingContextGen1 { id x0; unsigned int x1; unsigned int x2; } x32; BOOL x33; struct AGXATelemetryUsage { unsigned long long x0[2]; } x34; BOOL x35; BOOL x36; } x0; id x1; id x2; } *_impl;
}

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
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;
- (void)updateTextureMappings:(id)a0 mode:(unsigned long long)a1 regions:(const struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a2 mipLevels:(const unsigned long long *)a3 slices:(const unsigned long long *)a4 numRegions:(unsigned long long)a5;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipLevel:(unsigned long long)a3 slice:(unsigned long long)a4;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 indirectBuffer:(id)a2 indirectBufferOffset:(unsigned long long)a3;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)optimizeContentsForGPUAccess:(id)a0;
- (void)optimizeContentsForCPUAccess:(id)a0;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toBuffer:(id)a5 destinationOffset:(unsigned long long)a6 destinationBytesPerRow:(unsigned long long)a7 destinationBytesPerImage:(unsigned long long)a8;
- (void)generateMipmapsForTexture:(id)a0;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)endEncoding;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 toTexture:(id)a3 destinationSlice:(unsigned long long)a4 destinationLevel:(unsigned long long)a5 sliceCount:(unsigned long long)a6 levelCount:(unsigned long long)a7;
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
- (BOOL)commandBatchIdRangeMin:(unsigned int *)a0 max:(unsigned int *)a1;
- (unsigned int)commandBatchIdOffset;
- (BOOL)setMTLCounterSampleLocationWithBuffer:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2;

@end
