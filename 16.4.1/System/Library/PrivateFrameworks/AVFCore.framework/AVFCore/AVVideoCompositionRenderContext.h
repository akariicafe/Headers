@class AVVideoComposition, AVVideoCompositionRenderContextInternal;

@interface AVVideoCompositionRenderContext : NSObject {
    AVVideoCompositionRenderContextInternal *_internal;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } renderTransform;
@property (readonly, nonatomic) float renderScale;
@property (readonly, nonatomic) struct { long long x0; long long x1; } pixelAspectRatio;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } edgeWidths;
@property (readonly, nonatomic) BOOL highQualityRendering;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor { } *)a0;

- (struct __CVBuffer { } *)newPixelBuffer;
- (void)dealloc;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (void)_willDeallocOrFinalize;
- (BOOL)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor { } *)a0;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor { } *)a0 clientRequiredPixelBufferAttributes:(id)a1 videoComposition:(id)a2 pixelBufferPool:(struct __CVPixelBufferPool { } *)a3;
- (BOOL)isBufferYCbCr:(struct __CVBuffer { } *)a0;

@end
