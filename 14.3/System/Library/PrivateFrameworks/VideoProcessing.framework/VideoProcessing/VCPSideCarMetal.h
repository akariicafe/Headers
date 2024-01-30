@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue, MTLComputePipelineState;

@interface VCPSideCarMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _transitionDetection;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBALuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBAChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _packetPool;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _blockDist;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned int _planeOffset[4];
    unsigned int _planeBytesPerRow[4];
}

- (id)init;
- (void).cxx_destruct;
- (struct future<CF<const __CFData *> > { struct __assoc_state<CF<const __CFData *> > *x0; })createEncodePacket:(struct __CVBuffer { } *)a0 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 instance:(unsigned int)a2 sequenceNumber:(unsigned int)a3 frameIndex:(unsigned int)a4 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 frameProperties:(struct __CFDictionary { } *)a7;
- (id).cxx_construct;
- (void)setPacketLayout:(id)a0;
- (int)selectGPUForFrame:(struct __CVBuffer { } *)a0;
- (id)cachedTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;
- (id)rgbaUnormTextureForLuma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (id)rgbaUintTextureForLuma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (id)rgbaUintTextureForChroma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (struct future<unsigned long long> { struct __assoc_state<unsigned long long> *x0; })temporalTransitionScore:(struct __CVBuffer { } *)a0 previousFrame:(struct __CVBuffer { } *)a1 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2;
- (int)copyFromFrame:(struct __CVBuffer { } *)a0 toTile:(struct __CVBuffer { } *)a1 origin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 withFence:(struct future<void> { struct __assoc_sub_state *x0; } *)a4;

@end
