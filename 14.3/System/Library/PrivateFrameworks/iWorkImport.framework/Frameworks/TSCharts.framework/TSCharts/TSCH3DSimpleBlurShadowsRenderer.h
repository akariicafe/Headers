@class NSArray, TSCH3DFBOResource;

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {
    TSCH3DFBOResource *mShadowsFBOResource;
    TSCH3DFBOResource *mBlurFBOResource;
    struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } mShadowsSize;
    NSArray *mBlurParametersArray;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)invalidate;
- (id)initWithBlurParametersArray:(id)a0;
- (float)blurSlackForQuality:(float)a0;
- (void)protectShadowForQuality:(float)a0 pipeline:(id)a1 renderBlock:(id /* block */)a2;
- (id)shadowsFBOForContext:(id)a0;
- (void)unprotectShadowInSession:(id)a0;
- (void)blurParametersFromQuality:(float)a0 shadowSize:(long long *)a1 numPasses:(long long *)a2 kernelScale:(float *)a3;

@end
