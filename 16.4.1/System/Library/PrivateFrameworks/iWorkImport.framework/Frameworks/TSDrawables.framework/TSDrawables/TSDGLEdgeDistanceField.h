@class TSDGLFrameBuffer, TSDGLState;
@protocol TSDGLDataBuffer;

@interface TSDGLEdgeDistanceField : NSObject {
    unsigned int _inputTexture;
    struct CGSize { double width; double height; } _textureSize;
    struct CGSize { double width; double height; } _resultTextureSize;
    struct CGSize { double width; double height; } _squareSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
    double _downsampleScale;
    TSDGLFrameBuffer *_exteriorFramebuffer;
    TSDGLFrameBuffer *_interiorFramebuffer;
    id<TSDGLDataBuffer> _origDataBuffer;
    id<TSDGLDataBuffer> _rectDataBuffer;
    id<TSDGLDataBuffer> _squareDataBuffer;
    TSDGLState *_GLState;
    int _oldViewport[4];
}

+ (void)didEndUsingShaders;
+ (id)distanceFieldTextureWithTexture:(unsigned int)a0 textureSize:(struct CGSize { double x0; double x1; })a1 maxDistance:(long long)a2 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 downsampleScale:(double)a4 floatTexture:(BOOL)a5 GLState:(id)a6;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (void)teardown;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (id)initWithTexture:(unsigned int)a0 textureSize:(struct CGSize { double x0; double x1; })a1 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 downsampleScale:(double)a3 GLState:(id)a4;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)a0 floatTexture:(BOOL)a1;
- (void)p_floodTextureInFramebuffer:(id)a0 maxDistance:(long long)a1;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)a0 withCurrentGLFramebuffer:(int)a1;
- (void)p_seedTextureFromTexture:(unsigned int)a0 invertSeed:(BOOL)a1;
- (void)p_writeIntoSquareTexture;

@end
