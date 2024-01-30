@class TSDGLShader, TSDGLFrameBuffer, TSDGLState;
@protocol TSDGLDataBuffer, TSDAnimationRandomGenerator;

@interface TSDGLMotionBlurEffect : NSObject {
    struct CGSize { double width; double height; } _framebufferSize;
    struct CGSize { double width; double height; } _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    id<TSDGLDataBuffer> _colorFBODataBuffer;
    id<TSDGLDataBuffer> _velocityFBODataBuffer;
    id<TSDGLDataBuffer> _velocitySquashedFBODataBuffer;
    id<TSDGLDataBuffer> _FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport[4];
    id<TSDAnimationRandomGenerator> _randomGenerator;
}

@property (nonatomic) BOOL isSingleObject;
@property (nonatomic) double motionBlurStrength;
@property (nonatomic) long long debugDrawMode;
@property (nonatomic) double framebufferScale;
@property (retain, nonatomic) TSDGLState *GLState;

- (void)teardown;
- (void)dealloc;
- (id)description;
- (void)p_updateMaxVelocityInShadersWithScale:(double)a0 isColorFBO:(BOOL)a1;
- (struct CGSize { double x0; double x1; })velocityScaleForColorFBO:(BOOL)a0;
- (void)setupMotionBlurEffectIfNecessary;
- (struct CGSize { double x0; double x1; })p_velocityFramebufferSize;
- (struct CGSize { double x0; double x1; })p_squashedVelocityFramebufferSize;
- (struct CGSize { double x0; double x1; })p_velocityFramebufferTextureScale;
- (void)p_setupShaders;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)a0;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)a0;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)a0;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)a0;
- (void)p_setupVelocityFramebufferIfNecessary;
- (id)initWithFramebufferSize:(struct CGSize { double x0; double x1; })a0 slideSize:(struct CGSize { double x0; double x1; })a1 randomGenerator:(id)a2;
- (void)updateVelocityScaleInShader:(id)a0;
- (void)bindColorAndVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)drawResultWithCurrentGLFramebuffer:(int)a0;

@end
