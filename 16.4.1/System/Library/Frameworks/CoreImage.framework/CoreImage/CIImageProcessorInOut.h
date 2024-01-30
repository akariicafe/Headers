@class CIContext;
@protocol MTLTexture, MTLDevice;

@interface CIImageProcessorInOut : NSObject {
    struct __IOSurface { } *_surface;
    BOOL _usesSRGB;
    void *_context;
    id<MTLTexture> _mtlTexture;
    BOOL _surfaceLocked;
    CIContext *_metalContext;
    unsigned long long _digest;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } region;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) BOOL usesSRGBTransferFunction;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long digest;

- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(struct Texture { union { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; struct { void *x0; void *x1; } x2; } x0; })a1 digest:(unsigned long long)a2 allowSRGB:(BOOL)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(void *)a5;

@end
