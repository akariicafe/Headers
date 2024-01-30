@class TSDGLTextureInfo, TSDGLShader;

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {
    BOOL _didTeardown;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _outgoingTextBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _incomingTextBounds;
    struct { float r; float g; float b; float a; } _outgoingTextColor;
    struct { float r; float g; float b; float a; } _incomingTextColor;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _outgoingTextureEdgeInsetsAdjustmentMatrix;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _incomingTextureEdgeInsetsAdjustmentMatrix;
    struct { double skew; double skewOffset; double scale; } _textureAdjustment;
    BOOL _didSetupTextureAdjustment;
}

@property (readonly, nonatomic) TSDGLTextureInfo *outgoingTextureInfo;
@property (readonly, nonatomic) TSDGLTextureInfo *incomingTextureInfo;
@property (readonly, nonatomic) TSDGLShader *shader;
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize;

+ (void)didEndUsingShaders;
+ (id)willBeginUsingShadersWithMotionBlur:(BOOL)a0 motionBlurIgnoreTextureOpacity:(BOOL)a1;

- (void)teardown;
- (void)dealloc;
- (void)setupIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_actualPixelBoundsOfTexturedRectangle:(id)a0;
- (struct CGContext { } *)newContextFromTexture:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_affineTransformWithTextureAdjustment:(struct { double x0; double x1; double x2; })a0 textureSize:(struct CGSize { double x0; double x1; })a1;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x0; double x1; double x2; })a0 toOutgoingValue:(double)a1 incomingValue:(double)a2 sample:(unsigned long long)a3 sampleCount:(unsigned long long)a4;
- (struct { double x0; double x1; double x2; })textureMatchingTextureAdjustment;
- (BOOL)p_fillScanlineCenters:(struct CGPoint { double x0; double x1; } *)a0 scanlineMinMaxZeroes:(struct CGPoint { double x0; double x1; } *)a1 samples:(unsigned long long)a2 fromTexture:(unsigned int)a3 textureSize:(struct CGSize { double x0; double x1; })a4;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x0; double x1; double x2; })a0 toOutgoingScanlineCenters:(struct CGPoint { double x0; double x1; } *)a1 outgoingScanlineZeroes:(struct CGPoint { double x0; double x1; } *)a2 incomingScanlineCenters:(struct CGPoint { double x0; double x1; } *)a3 incomingScanlineZeroes:(struct CGPoint { double x0; double x1; } *)a4 samples:(unsigned long long)a5;
- (id)initWithOutgoingTextureName:(unsigned int)a0 outgoingTextureSize:(struct CGSize { double x0; double x1; })a1 outgoingTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outgoingColor:(struct { float x0; float x1; float x2; float x3; })a3 incomingTextureName:(unsigned int)a4 incomingTextureSize:(struct CGSize { double x0; double x1; })a5 incomingTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 incomingColor:(struct { float x0; float x1; float x2; float x3; })a7 GLState:(id)a8 motionBlur:(BOOL)a9 motionBlurIgnoreTextureOpacity:(BOOL)a10;
- (void)setupShaderWithMorphPercent:(double)a0 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 outgoingTextureMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 incomingTextureMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (id)initWithOutgoingTR:(id)a0 incomingTR:(id)a1 GLState:(id)a2 motionBlur:(BOOL)a3 motionBlurIgnoreTextureOpacity:(BOOL)a4;
- (void)setupShaderWithMorphPercent:(double)a0 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 generateTextureMatrices:(BOOL)a2;

@end
