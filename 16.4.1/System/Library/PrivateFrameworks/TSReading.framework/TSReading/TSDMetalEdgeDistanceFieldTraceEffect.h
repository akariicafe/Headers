@class TSDMetalShader, NSArray, TSDMetalTextureInfo;
@protocol TSDAnimationRandomGenerator;

@interface TSDMetalEdgeDistanceFieldTraceEffect : NSObject {
    BOOL _canDraw;
    BOOL _didTeardown;
    long long _traceTextureMaxValue;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _textureEdgeInsetsAdjustmentMatrix;
    struct __CFArray { } *_zeroesArray;
    struct CGSize { double width; double height; } _bufferSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewportRect;
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } mvpMatrix; struct { void /* unknown type, empty encoding */ columns[3]; } textureMatrix; } _vertexUniforms;
    struct { void /* unknown type, empty encoding */ Color; void /* unknown type, empty encoding */ TextureSize; void /* unknown type, empty encoding */ LayerSize; float Opacity; float Percent; float DistanceAdjust; float StrokeWidth; float StrokeFadeHardnessLeading; float StrokeFadeHardnessTrailing; int TextureLevels; } _fragmentUniforms;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) TSDMetalTextureInfo *edgeDistanceFieldTextureInfo;
@property (readonly, nonatomic) TSDMetalTextureInfo *traceTextureInfo;
@property (readonly, nonatomic) TSDMetalShader *shader;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } randomStrokePoint;
@property (readonly, nonatomic) NSArray *strokeLineSegment;
@property (readonly, nonatomic) id<TSDAnimationRandomGenerator> randomGenerator;

+ (void)didEndWithDevice:(id)a0;
+ (void)willBeginWithDevice:(id)a0;

- (void)dealloc;
- (void)teardown;
- (id)description;
- (void).cxx_destruct;
- (void)drawWithContext:(id)a0 andBuffer:(id)a1 atPercent:(double)a2 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a3 opacity:(double)a4 color:(struct { float x0; float x1; float x2; float x3; })a5 strokeFadeHardnessLeading:(double)a6 strokeFadeHardnessTrailing:(double)a7;
- (id)initWithTR:(id)a0 strokeWidth:(double)a1 downsampleScale:(double)a2 clockwise:(BOOL)a3 context:(id)a4 randomGenerator:(id)a5 capabilities:(id)a6;
- (void)p_addNearbyPixelsToArray:(struct __CFArray { } *)a0 pixel:(struct CGPoint { double x0; double x1; })a1 edgeDataBuffer:(float *)a2 dataBuffer:(char *)a3 tempDataBuffer:(char *)a4 localMaximumLookupBuffer:(BOOL *)a5 bufferSize:(struct CGSize { double x0; double x1; })a6;
- (void)p_fillFloatBuffer:(float *)a0 withRGBAData:(char *)a1 bufferSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)p_generateTraceTextureInfoWithStrokeWidth:(double)a0 clockwise:(BOOL)a1 context:(id)a2 randomGenerator:(id)a3;
- (id)p_houghTransformWithZeroes:(struct __CFArray { } *)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint { double x0; double x1; })a0 inBufferSize:(struct CGSize { double x0; double x1; })a1;

@end
