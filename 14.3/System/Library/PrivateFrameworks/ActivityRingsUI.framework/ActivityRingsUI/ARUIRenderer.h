@class ARUISpritesRenderer, ARUIRingsRenderer, ARUICelebrationsRenderer, ARUIRingsRenderPipelineFactory;
@protocol MTLCommandQueue, MTLDeviceSPI;

@interface ARUIRenderer : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    ARUIRingsRenderPipelineFactory *_ringsRenderPipelineFactory;
    ARUIRingsRenderer *_ringsRenderer;
    ARUISpritesRenderer *_spritesRenderer;
    ARUICelebrationsRenderer *_celebrationsRenderer;
}

@property (readonly, nonatomic) unsigned long long renderStyle;

- (void)clearCaches;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (void)renderRingGroupControllers:(SEL)a0 withSize:(id)a1 intoTexture:(id)a2 withDrawable:(id)a3 waitUntilCompleted:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)initWithRenderStyle:(unsigned long long)a0 commandQueue:(id)a1;
- (id)renderPipelineFactoryWithDeviceSPI:(id)a0 librarySPI:(id)a1;
- (void)_renderRings:(id)a0 spriteSheet:(id)a1 intoTexture:(id)a2 presentingDrawable:(id)a3 withContext:(id)a4 waitUntilCompleted:(BOOL)a5 completion:(id /* block */)a6;
- (id)ringsRenderPipelineConfigurationForRings:(id)a0 context:(id)a1;
- (id)_snapshotRings:(id)a0 spriteSheet:(id)a1 withContext:(id)a2;
- (id)snapshotRings:(id)a0 spriteSheet:(id)a1 withContext:(id)a2;
- (id)initWithRenderStyle:(unsigned long long)a0;
- (id)renderPipelineFactoryWithDevice:(id)a0 library:(id)a1;
- (void)renderRings:(id)a0 intoDrawable:(id)a1 withContext:(id)a2;
- (void)renderRings:(id)a0 intoDrawable:(id)a1 withContext:(id)a2 completion:(id /* block */)a3;
- (void)renderRings:(id)a0 spriteSheet:(id)a1 intoDrawable:(id)a2 withContext:(id)a3;
- (void)renderRings:(id)a0 spriteSheet:(id)a1 intoDrawable:(id)a2 withContext:(id)a3 completion:(id /* block */)a4;
- (id)snapshotRings:(id)a0 withContext:(id)a1;
- (id)snapshotRingGroupControllers:(SEL)a0 withSize:(id)a1;

@end
