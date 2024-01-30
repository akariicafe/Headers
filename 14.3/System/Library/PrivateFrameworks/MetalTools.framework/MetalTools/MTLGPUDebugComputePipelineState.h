@class MTLComputePipelineReflection, MTLComputePipelineDescriptor, MTLToolsFunction, NSData, MTLGPUDebugBuffer;
@protocol MTLBuffer;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_internalReflection;
    MTLComputePipelineReflection *_userReflection;
    struct KeyBufferPair { struct Key { struct { unsigned char key[32]; } hash; NSData *data; } key; id<MTLBuffer> buffer; } _globalConstants;
}

@property (readonly, nonatomic) MTLToolsFunction *computeFunction;
@property (readonly, nonatomic) MTLComputePipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLComputePipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;

- (void)dealloc;
- (id).cxx_construct;
- (void)releaseReflection;
- (id)initWithComputePipelineState:(id)a0 descriptor:(id)a1 unwrappedDescriptor:(id)a2 reflection:(id)a3 device:(id)a4;

@end
