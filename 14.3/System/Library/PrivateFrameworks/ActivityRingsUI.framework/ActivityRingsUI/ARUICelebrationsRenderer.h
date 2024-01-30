@class _TtC3VFX11VFXRenderer;
@protocol MTLDevice;

@interface ARUICelebrationsRenderer : NSObject {
    id<MTLDevice> _device;
    _TtC3VFX11VFXRenderer *_renderer;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1;
- (void)renderCelebrationsForRings:(id)a0 withCommandBuffer:(id)a1 intoTexture:(id)a2 withContext:(id)a3;
- (BOOL)_needsCelebrationRenderPassOn:(id)a0;

@end
