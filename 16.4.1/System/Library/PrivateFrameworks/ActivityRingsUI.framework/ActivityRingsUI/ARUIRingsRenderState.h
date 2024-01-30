@class NSString;
@protocol MTLRenderPipelineState;

@interface ARUIRingsRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering, ARUIRingsState> {
    id<MTLRenderPipelineState> _renderPipelineState;
}

@property (nonatomic) unsigned long long renderArea;
@property (nonatomic) long long centeredAroundPercentSegmentDrawCount;
@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipelineState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (id)name;
- (void)didInitialize;
- (id)initWithPipelineLibrary:(id)a0;
- (id)renderPipelineDescriptorFromLibrary:(id)a0;
- (BOOL)shouldRunStateForRing:(id)a0;

@end
