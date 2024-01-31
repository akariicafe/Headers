@class NSArray, PTRenderPipeline, CNRenderingSessionAttributes;
@protocol MTLCommandQueue, PTRenderState;

@interface CNRenderingSession : NSObject {
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
}

@property (class, readonly) NSArray *sourcePixelFormatTypes;
@property (class, readonly) NSArray *destinationPixelFormatTypes;

@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) CNRenderingSessionAttributes *sessionAttributes;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (readonly) long long quality;

- (void).cxx_destruct;
- (BOOL)_encodeRenderToCommandBuffer:(id)a0 frameAttributes:(id)a1 sourceImage:(struct __CVBuffer { } *)a2 sourceDisparity:(struct __CVBuffer { } *)a3 destinationTexture:(id)a4 destRGBA:(BOOL)a5;
- (BOOL)encodeRenderToCommandBuffer:(id)a0 frameAttributes:(id)a1 sourceImage:(struct __CVBuffer { } *)a2 sourceDisparity:(struct __CVBuffer { } *)a3 destinationImage:(struct __CVBuffer { } *)a4;
- (BOOL)encodeRenderToCommandBuffer:(id)a0 frameAttributes:(id)a1 sourceImage:(struct __CVBuffer { } *)a2 sourceDisparity:(struct __CVBuffer { } *)a3 destinationLuma:(id)a4 destinationChroma:(id)a5;
- (BOOL)encodeRenderToCommandBuffer:(id)a0 frameAttributes:(id)a1 sourceImage:(struct __CVBuffer { } *)a2 sourceDisparity:(struct __CVBuffer { } *)a3 destinationRGBA:(id)a4;
- (id)initWithCommandQueue:(id)a0 sessionAttributes:(id)a1 preferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 quality:(long long)a3;

@end
