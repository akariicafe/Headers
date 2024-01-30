@class NSString;
@protocol GGLRenderQueueSource;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    BOOL _canMakeImage;
    BOOL _recreateRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> > { struct __compressed_pair<ggl::IOSurfaceTexture *, std::__1::default_delete<ggl::IOSurfaceTexture> > { struct IOSurfaceTexture *__value_; } __ptr_; } _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { struct RenderTarget *__value_; } __ptr_; } _flippedRenderTarget;
    struct unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass> > { struct __compressed_pair<(anonymous namespace)::YFlipPass *, std::__1::default_delete<(anonymous namespace)::YFlipPass> > { struct YFlipPass *__value_; } __ptr_; } _yFlipPass;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _sRGBFormat;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _resolvedRenderTargetFormat;
    struct shared_ptr<ggl::Device> { struct Device *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    struct Renderer { void /* function */ **x0; struct Device *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; float x6; unsigned long long x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> *x0; struct shared_ptr<ggl::DebugRenderer> *x1; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> *x0; struct StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> { struct Allocator *x0; } x1; } x2; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue *x0; } x0; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary *x0; struct __shared_weak_count *x1; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences *x0; } x0; } x11; struct Texture2D *x12; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer *x0; } x0; } x13; } *_renderer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { struct RenderTarget *__value_; } __ptr_; } _sRGBRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _sRGBColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { struct RenderBuffer *__value_; } __ptr_; } _depthStencilBuffer;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { struct RenderTarget *__value_; } __ptr_; } _linearRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _linearColorBuffer;
    struct shared_ptr<ggl::Texture> { struct Texture *__ptr_; struct __shared_weak_count *__cntrl_; } _msaaResolveBuffer;
    unsigned long long _signpostId;
}

@property (nonatomic) BOOL allowAlpha;
@property (readonly, nonatomic) struct RenderTarget { void /* function */ **x0; struct ResourceManager *x1; struct RenderResource *x2; void /* function */ **x3; char *x4; struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } x5; struct Texture *x6[4]; struct Texture *x7[4]; struct Texture *x8; BOOL x9; } *renderTarget;
@property (readonly, nonatomic) struct RenderTarget { void /* function */ **x0; struct ResourceManager *x1; struct RenderResource *x2; void /* function */ **x3; char *x4; struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } x5; struct Texture *x6[4]; struct Texture *x7[4]; struct Texture *x8; BOOL x9; } *finalRenderTarget;
@property (readonly, nonatomic) struct RenderTarget { void /* function */ **x0; struct ResourceManager *x1; struct RenderResource *x2; void /* function */ **x3; char *x4; struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } x5; struct Texture *x6[4]; struct Texture *x7[4]; struct Texture *x8; BOOL x9; } *linearRenderTarget;
@property (readonly, nonatomic) struct Texture2D { void /* function */ **x0; struct ResourceManager *x1; struct RenderResource *x2; void /* function */ **x3; char *x4; int x5; int x6; int x7; int x8; unsigned int x9; int x10; unsigned int x11; unsigned int x12; struct shared_ptr<const ggl::Texture2DAbstract> { struct Texture2DAbstract *x0; struct __shared_weak_count *x1; } x13; unsigned int x14; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract *x0; struct __shared_weak_count *x1; } x15; BOOL x16; BOOL x17; BOOL x18; struct shared_ptr<ggl::SamplerState> { struct SamplerState *x0; struct __shared_weak_count *x1; } x19; } *imageTexture;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) id<GGLRenderQueueSource> renderSource;
@property (readonly, nonatomic) BOOL multiSample;
@property (readonly, nonatomic) BOOL supportsFramebufferFetch;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *format;
@property (readonly, nonatomic) struct Renderer { void /* function */ **x0; struct Device *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; float x6; unsigned long long x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> *x0; struct shared_ptr<ggl::DebugRenderer> *x1; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> > { struct shared_ptr<ggl::DebugRenderer> *x0; struct StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator> { struct Allocator *x0; } x1; } x2; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue *x0; } x0; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary *x0; struct __shared_weak_count *x1; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences *x0; } x0; } x11; struct Texture2D *x12; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer *x0; } x0; } x13; } *renderer;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *linearFormat;
@property (readonly, nonatomic) float averageFPS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase *x0; struct __shared_weak_count *x1; })bitmapData;
- (BOOL)hasRenderTarget;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyRenderTarget;
- (struct RenderTarget { void /* function */ **x0; struct ResourceManager *x1; struct RenderResource *x2; void /* function */ **x3; char *x4; struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } x5; struct Texture *x6[4]; struct Texture *x7[4]; struct Texture *x8; BOOL x9; } *)_internalRenderTarget;
- (void)createRenderTarget;
- (void)willDrawView;
- (id).cxx_construct;
- (struct Texture { void /* function */ **x0; struct ResourceManager *x1; struct RenderResource *x2; void /* function */ **x3; char *x4; int x5; int x6; int x7; int x8; unsigned int x9; int x10; unsigned int x11; unsigned int x12; } *)finalSurface;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMultisampling:(BOOL)a2 taskContext:(const struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; } *)a3 device:(struct Device { int x0; struct shared_ptr<ggl::Device> { struct Device *x0; struct __shared_weak_count *x1; } x1; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources *x0; } x0; } x2; } *)a4 signpostId:(unsigned long long)a5;
- (void)didDrawView;
- (void)renderWithTimestamp:(double)a0 completion:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; struct __base<void ()> *x1; } x0; })a1;

@end
