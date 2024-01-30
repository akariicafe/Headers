@protocol MTLTexture, MTLCommandBuffer;

@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {
    id<MTLCommandBuffer> _cmdBuffer;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) void *baseAddress;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) id<MTLCommandBuffer> metalCommandBuffer;

- (unsigned int)contextID;
- (id)metalContext;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(struct Texture { union { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; struct { void *x0; void *x1; } x2; } x0; })a1 allowSRGB:(BOOL)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(void *)a4;
- (BOOL)metalCommandBufferRequested;
- (void)dealloc;
- (struct CGColorSpace { } *)workingColorSpace;

@end
