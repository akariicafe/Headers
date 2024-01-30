@class NSArray, TSCH3DFBOResource;

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {
    TSCH3DFBOResource *_shadowsFBOResource;
    TSCH3DFBOResource *_blurFBOResource;
    struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _shadowsSize;
    NSArray *_blurParametersArray;
}

- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (void)blurParametersFromQuality:(float)a0 shadowSize:(long long *)a1 numPasses:(long long *)a2 kernelScale:(float *)a3;
- (float)blurSlackForQuality:(float)a0;
- (id)initWithBlurParametersArray:(id)a0;
- (void)protectShadowForQuality:(float)a0 pipeline:(id)a1 renderBlock:(id /* block */)a2;
- (id)shadowsFBOForContext:(id)a0;
- (void)unprotectShadowInSession:(id)a0;

@end
