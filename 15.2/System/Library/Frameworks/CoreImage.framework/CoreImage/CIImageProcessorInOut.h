@protocol MTLTexture, MTLDevice;

@interface CIImageProcessorInOut : NSObject {
    struct __IOSurface { } *_surface;
    BOOL _usesSRGB;
    void *_context;
    id<MTLTexture> _mtlTexture;
    BOOL _surfaceLocked;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } region;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) BOOL usesSRGBTransferFunction;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) id<MTLDevice> device;

- (id)description;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(struct Texture { union { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; struct { void *x0; void *x1; } x2; } x0; })a1 allowSRGB:(BOOL)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(void *)a4;
- (void)dealloc;

@end
