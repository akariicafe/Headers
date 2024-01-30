@class MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLDevice, MTLRenderPipelineState;

@interface CVABilinearSampler : NSObject {
    id<MTLDevice> _device;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPipelineDescriptor *_renderPipelineDescriptor;
    id<MTLRenderPipelineState> _renderPipelineState;
    struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ texcoord; } _vertexData[4];
}

@property struct { void /* unknown type, empty encoding */ points[4]; } sourceQuad;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;

@end
