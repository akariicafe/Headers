@class TSDMetalRenderTarget, TSDMetalShader;
@protocol TSDMTLDataBuffer;

@interface TSDMetalBloomEffect : NSObject {
    struct CGSize { double width; double height; } _effectSize;
    struct CGSize { double width; double height; } _blurBufferSize;
    id<TSDMTLDataBuffer> _dataBuffer;
    id<TSDMTLDataBuffer> _blurDataBuffer;
    TSDMetalRenderTarget *_downSampleRenderTarget;
    TSDMetalRenderTarget *_horizontalBlurRenderTarget;
    TSDMetalRenderTarget *_verticalBlurRenderTarget;
    TSDMetalShader *_blurShader;
    TSDMetalShader *_bloomShader;
    TSDMetalShader *_fboTransferShader;
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } MVPMatrix; } _blurVertexUniforms;
    struct { void /* unknown type, empty encoding */ TextureSize; BOOL IsHorizontal; } _blurFragmentUniforms;
}

- (void)teardown;
- (void).cxx_destruct;
- (void)p_setupShadersWithMetalContext:(id)a0;
- (void)p_setupBuffersWithMetalContext:(id)a0;
- (void)drawBloomEffectWithTexture:(id)a0 metalContext:(id)a1 encoder:(id)a2 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a3 bloomAmount:(double)a4;
- (id)initWithEffectSize:(struct CGSize { double x0; double x1; })a0 blurScale:(double)a1 metalContext:(id)a2;
- (id)p_blurTextureWithTexture:(id)a0 metalContext:(id)a1 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2;

@end
