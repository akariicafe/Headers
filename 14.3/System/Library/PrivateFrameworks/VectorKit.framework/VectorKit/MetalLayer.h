@protocol GGLLayerDelegate;

@interface MetalLayer : CAMetalLayer <GGLLayer> {
    struct shared_ptr<ggl::MetalDevice> { struct MetalDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    struct shared_ptr<ggl::Texture2D> { struct Texture2D *__ptr_; struct __shared_weak_count *__cntrl_; } _texture;
    struct shared_ptr<ggl::SamplerState> { struct SamplerState *__ptr_; struct __shared_weak_count *__cntrl_; } _samplerState;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } backingSize;
@property (readonly, nonatomic) BOOL sRGB;
@property id<GGLLayerDelegate> renderDelegate;
@property (readonly) int backingFormat;

- (void)didEnterBackground;
- (void)layoutSublayers;
- (void)onTimerFired:(double)a0;
- (id)initWithDevice:(struct shared_ptr<ggl::MetalDevice> { struct MetalDevice *x0; struct __shared_weak_count *x1; })a0 sRGB:(BOOL)a1;
- (void).cxx_destruct;
- (void)_onTimerFired:(double)a0 withPresent:(id /* block */)a1;
- (void)display;
- (void)onTimerFired:(double)a0 presentAfterMinimumDuration:(double)a1;
- (id)_updateDrawable;
- (id).cxx_construct;
- (void)onTimerFired:(double)a0 presentAtTime:(double)a1;
- (void)_createTexture;

@end
