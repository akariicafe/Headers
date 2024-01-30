@class NSString;
@protocol GGLRenderQueueSource;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    BOOL _canMakeImage;
    BOOL _recreateRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>> { struct __compressed_pair<ggl::IOSurfaceTexture *, std::default_delete<ggl::IOSurfaceTexture>> { struct IOSurfaceTexture *__value_; } __ptr_; } _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _flippedRenderTarget;
    struct unique_ptr<(anonymous namespace)::YFlipPass, std::default_delete<(anonymous namespace)::YFlipPass>> { struct __compressed_pair<(anonymous namespace)::YFlipPass *, std::default_delete<(anonymous namespace)::YFlipPass>> { struct YFlipPass *__value_; } __ptr_; } _yFlipPass;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _sRGBFormat;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _resolvedRenderTargetFormat;
    struct shared_ptr<ggl::Device> { struct Device *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    void *_renderer;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _sRGBRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _sRGBColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> { struct __compressed_pair<ggl::RenderBuffer *, std::default_delete<ggl::RenderBuffer>> { struct RenderBuffer *__value_; } __ptr_; } _depthStencilBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3> { struct shared_ptr<ggl::RenderBuffer> { struct RenderBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } __elems_[3]; } _sRGBColorTextures;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _linearRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _linearColorBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3> { struct shared_ptr<ggl::RenderBuffer> { struct RenderBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } __elems_[3]; } _linearColorTextures;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__value_; } __ptr_; } _blitRenderTarget;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _blitFormat;
    struct shared_ptr<ggl::Texture> { struct Texture *__ptr_; struct __shared_weak_count *__cntrl_; } _msaaResolveBuffer;
    unsigned long long _signpostId;
}

@property (nonatomic) BOOL allowAlpha;
@property (readonly, nonatomic) void *renderTarget;
@property (readonly, nonatomic) void *finalRenderTarget;
@property (readonly, nonatomic) void *linearRenderTarget;
@property (readonly, nonatomic) void *imageTexture;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) id<GGLRenderQueueSource> renderSource;
@property (readonly, nonatomic) BOOL multiSample;
@property (readonly, nonatomic) BOOL supportsFramebufferFetch;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *format;
@property (readonly, nonatomic) void *renderer;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *linearFormat;
@property (readonly, nonatomic) void *blitRenderTarget;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *blitFormat;
@property (readonly, nonatomic) float averageFPS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDrawView;
- (void)createRenderTarget;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase *x0; struct __shared_weak_count *x1; })bitmapData;
- (struct __IOSurface { } *)flipImage;
- (void)destroyRenderTarget;
- (void).cxx_destruct;
- (void *)finalSurface;
- (BOOL)hasRenderTarget;
- (void)renderWithTimestamp:(double)a0 completion:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMultisampling:(BOOL)a2 extraColorFormats:(const void *)a3 taskContext:(const void *)a4 device:(void *)a5 signpostId:(unsigned long long)a6;
- (void)didDrawView;
- (void *)_internalRenderTarget;
- (void)dealloc;
- (id).cxx_construct;

@end
