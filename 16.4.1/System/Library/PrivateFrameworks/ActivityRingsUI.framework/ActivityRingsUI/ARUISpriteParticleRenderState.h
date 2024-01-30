@class NSString;
@protocol MTLRenderPipelineState;

@interface ARUISpriteParticleRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering> {
    id<MTLRenderPipelineState> _renderPipelineState;
}

@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipelineState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (id)name;
- (id)initWithPipelineLibrary:(id)a0;
- (id)renderPipelineDescriptorFromLibrary:(id)a0;

@end
