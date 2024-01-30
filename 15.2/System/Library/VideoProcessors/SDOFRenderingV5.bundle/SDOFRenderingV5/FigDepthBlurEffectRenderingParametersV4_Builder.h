@interface FigDepthBlurEffectRenderingParametersV4_Builder : NSObject {
    struct FigDepthBlurEffectRenderingParametersV4 { struct FigDepthBlurEffectRenderingParametersHeader { int x0; int x1; unsigned int x2; } x0; int x1; struct FigDepthBlurEffectRenderingParametersV4_ParameterPair { short x0; short x1; union { float x0; int x1; unsigned int x2; BOOL x3; } x2; } x2[0]; } *_rawParams;
    unsigned long long _capacity;
    BOOL _sorted;
}

@property (readonly, nonatomic) unsigned long long length;

- (id)initWithVersion:(int)a0;
- (void)dealloc;
- (void)setParamPair:(const struct FigDepthBlurEffectRenderingParametersV4_ParameterPair { short x0; short x1; union { float x0; int x1; unsigned int x2; BOOL x3; } x2; } *)a0;
- (id)encodedParams;
- (void)setParam:(short)a0 floatValue:(float)a1;
- (void)setParam:(short)a0 intValue:(int)a1;
- (void)setParam:(short)a0 uintValue:(unsigned int)a1;
- (void)setParam:(short)a0 boolValue:(BOOL)a1;

@end
