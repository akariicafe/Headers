@class TSDGLFrameBuffer, TSDGLShader;
@protocol TSDGLDataBuffer;

@interface TSDGLBloomEffect : NSObject {
    struct CGSize { double width; double height; } _effectSize;
    struct CGSize { double width; double height; } _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    id<TSDGLDataBuffer> _dataBuffer;
    id<TSDGLDataBuffer> _blurTransferDataBuffer;
    id<TSDGLDataBuffer> _blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
    int _oldViewportRect[4];
    BOOL _oldViewportRectInitialized;
}

- (void)dealloc;
- (void)teardown;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)bindFramebuffer;
- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 bloomAmount:(double)a1 currentGLFramebuffer:(int)a2 GLState:(id)a3;
- (id)initWithEffectSize:(struct CGSize { double x0; double x1; })a0 blurScale:(double)a1;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)a0 GLState:(id)a1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)a0;

@end
