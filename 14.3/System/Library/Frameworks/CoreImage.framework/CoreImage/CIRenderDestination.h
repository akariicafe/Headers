@class CIBlendKernel;

@interface CIRenderDestination : NSObject {
    void *_priv;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property unsigned long long alphaMode;
@property (getter=isFlipped) BOOL flipped;
@property (getter=isDithered) BOOL dithered;
@property (getter=isClamped) BOOL clamped;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (retain, nonatomic) CIBlendKernel *blendKernel;
@property BOOL blendsInDestinationColorSpace;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 format:(int)a4;

- (id)imageRepresentation;
- (struct CIRenderDestinationInternal { struct RenderDestination *x0; unsigned long long x1; unsigned long long x2; int x3; int x4; struct { double x0[3]; double x1[3]; double x2[3]; double x3; double x4; } x5; unsigned long long x6; BOOL x7; BOOL x8; int x9; BOOL x10; BOOL x11; BOOL x12; id x13; } *)_internalRepresentation;
- (struct RenderDestination { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct __CFString *x2; struct CGColorSpace *x3; } *)_internalRenderDestination;
- (void)_set_YCC_matrix:(int)a0 fullRange:(BOOL)a1 deep:(BOOL)a2 isFloat:(float)a3;
- (id)init;
- (void)dealloc;
- (id)initWithBitmapData:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 format:(int)a4;
- (id)surface;
- (void)setLabel:(id)a0;
- (id)_initWithInternalRenderDestination:(struct RenderDestination { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct __CFString *x2; struct CGColorSpace *x3; } *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(int)a3 colorspace:(struct CGColorSpace { } *)a4;
- (BOOL)isCompressed;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 colorSpace:(struct CGColorSpace { } *)a3 pixelBufferProvider:(id /* block */)a4;
- (id)initWithIOSurface:(id)a0;
- (int)format;
- (void)setCompressed:(BOOL)a0;
- (id)description;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)label;
- (int)ditherDepth;
- (id)debugDescription;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 commandBuffer:(id)a3 mtlTextureProvider:(id /* block */)a4;
- (struct RenderTask { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; char *x2; char *x3; char x4[128]; int x5; BOOL x6; unsigned long long x7; int x8; char x9[64]; unsigned long long x10; struct Node *x11; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x12; int x13; unsigned long long x14; struct __CFString *x15; struct __CFString *x16; struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *x0; struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *x1; struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *x0; } x2; } x17; double x18; double x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; } *)_render:(struct Image { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct __CFURL *x3; void *x4; void *x5; unsigned int x6; unsigned int x7; unsigned long long x8; } *)a0 withContext:(struct Context { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct CGColorSpace *x2; struct CGColorSpace *x3; int x4; float x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; struct CGContext *x11; float x12; BOOL x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; char x20[64]; BOOL x21; struct ObjectCache<CI::MainProgram, false> *x22; struct ObjectCache<CI::Node, false> *x23; struct ObjectCache<CI::Node, false> *x24; double x25; double x26; struct RenderTask *x27; int x28; int x29; struct Context *x30; unsigned long long x31; } *)a1;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 colorSpace:(struct CGColorSpace { } *)a3 surfaceProvider:(id /* block */)a4;
- (id)initWithGLTexture:(unsigned int)a0 target:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)initWithMTLTexture:(id)a0 commandBuffer:(id)a1;

@end
