@class TSDGLTextureInfo, NSArray, TSDGLShader;
@protocol TSDAnimationRandomGenerator;

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject {
    BOOL _canDraw;
    BOOL _didTeardown;
    long long _traceTextureMaxValue;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _textureEdgeInsetsAdjustmentMatrix;
    NSArray *_strokeLineSegment;
    struct __CFArray { } *_zeroesArray;
    struct CGSize { double width; double height; } _bufferSize;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) TSDGLTextureInfo *edgeDistanceFieldTextureInfo;
@property (readonly, nonatomic) TSDGLTextureInfo *traceTextureInfo;
@property (readonly, nonatomic) TSDGLShader *shader;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } randomStrokePoint;
@property (readonly, nonatomic) NSArray *strokeLineSegment;
@property (readonly, nonatomic) id<TSDAnimationRandomGenerator> randomGenerator;

+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (void)teardown;
- (id)description;
- (void)p_addNearbyPixelsToArray:(struct __CFArray { } *)a0 pixel:(struct CGPoint { double x0; double x1; })a1 edgeDataBuffer:(float *)a2 dataBuffer:(char *)a3 tempDataBuffer:(char *)a4 localMaximumLookupBuffer:(BOOL *)a5 bufferSize:(struct CGSize { double x0; double x1; })a6;
- (void)p_fillFloatBuffer:(float *)a0 withRGBAData:(char *)a1 bufferSize:(struct CGSize { double x0; double x1; })a2;
- (id)p_houghTransformWithZeroes:(struct __CFArray { } *)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint { double x0; double x1; })a0 inBufferSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTR:(id)a0 strokeWidth:(double)a1 downsampleScale:(double)a2 clockwise:(BOOL)a3 GLState:(id)a4 randomGenerator:(id)a5;
- (BOOL)p_generateTraceTextureInfoWithStrokeWidth:(double)a0 clockwise:(BOOL)a1 randomGenerator:(id)a2;
- (void)setupShaderWithPercent:(double)a0 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 opacity:(double)a2 color:(struct { float x0; float x1; float x2; float x3; })a3 strokeFadeHardnessLeading:(double)a4 strokeFadeHardnessTrailing:(double)a5;

@end
