@protocol MTLTexture;

@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) const void *baseAddress;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;

- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(struct Texture { union { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; void *x2; } x0; })a1 allowSRGB:(BOOL)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct Context { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct CGColorSpace *x2; struct CGColorSpace *x3; int x4; float x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; struct CGContext *x11; float x12; BOOL x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; char x20[64]; BOOL x21; struct ObjectCache<CI::MainProgram, false> *x22; struct ObjectCache<CI::Node, false> *x23; struct ObjectCache<CI::Node, false> *x24; double x25; double x26; struct RenderTask *x27; int x28; int x29; struct Context *x30; unsigned long long x31; } *)a4;
- (void)dealloc;

@end
