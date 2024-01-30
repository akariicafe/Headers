@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface VCPSideCarMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    BOOL _supportsSIMDPermute;
    BOOL _supportsQuadPermute;
    id<MTLComputePipelineState> _transitionDetection;
    id<MTLComputePipelineState> _transitionDetectionUnorm;
    id<MTLComputePipelineState> _blitKernel;
    id<MTLComputePipelineState> _deblockLumaH;
    id<MTLComputePipelineState> _deblockChromaH;
    int _deblockBitdepth;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBALuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBAChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
    NSDictionary *_readWriteAttributes;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _packetPool;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _blockDist;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned int _planeOffset[4];
    unsigned int _planeBytesPerRow[4];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (void)compileDeblockForFrame:(struct __CVBuffer { } *)a0;
- (id)compileFunction:(id)a0;
- (void)compileTransitionDetection;
- (int)copyFromFrame:(struct __CVBuffer { } *)a0 toTile:(struct __CVBuffer { } *)a1 origin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 withFence:(void *)a4;
- (int)copySubframe:(struct __CVBuffer { } *)a0 toFrame:(struct __CVBuffer { } *)a1 atOffset:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (struct future<CF<const __CFData *>> { void *x0; })createEncodePacket:(struct __CVBuffer { } *)a0 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 instance:(unsigned int)a2 sequenceNumber:(unsigned int)a3 frameIndex:(unsigned int)a4 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 frameProperties:(struct __CFDictionary { } *)a7;
- (id)rgbaUintTextureForChroma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (id)rgbaUintTextureForLuma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (id)rgbaUnormTextureForLuma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (int)selectGPUForFrame:(struct __CVBuffer { } *)a0;
- (void)setPacketLayout:(id)a0;
- (int)subframeDeblock:(struct __CVBuffer { } *)a0 withOffsetsY:(unsigned int *)a1 numEdges:(int)a2;
- (struct future<unsigned long long> { void *x0; })temporalTransitionScore:(struct __CVBuffer { } *)a0 previousFrame:(struct __CVBuffer { } *)a1 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2;
- (id)uintTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;

@end
