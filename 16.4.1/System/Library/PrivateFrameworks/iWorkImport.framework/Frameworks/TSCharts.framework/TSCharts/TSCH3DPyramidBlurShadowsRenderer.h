@class NSArray, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {
    NSArray *_pyramidResources;
    TSCH3DPyramidBlurFBOResource *_finalShadowResource;
    struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _initialSize;
    int _requestedSize;
    float _targetRadiusFactor;
}

- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (float)blurSlackForQuality:(float)a0;
- (id)initWithSize:(int)a0 targetRadiusFactor:(float)a1;
- (id)p_allResources;
- (void)p_setupResourcesForSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;
- (void)protectShadowForQuality:(float)a0 pipeline:(id)a1 renderBlock:(id /* block */)a2;
- (id)shadowsFBOForContext:(id)a0;
- (void)unprotectShadowInSession:(id)a0;

@end
