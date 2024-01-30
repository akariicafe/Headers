@class TSCH3DResource, TSCH3DSceneRenderPipeline, TSCH3DLabelsRendererTransforms, TSCH3DCamera, TSCH3DLabelResources, TSCH3DLabelResource, TSCH3DDataBufferResource, TSCH3DLabelsMeshRenderer;

@interface TSCH3DLabelsRenderer : NSObject {
    TSCH3DResource *mLabelQuad;
    TSCH3DResource *mLabelTexcoordQuad;
    TSCH3DLabelsRendererTransforms *mTransforms;
}

@property (retain, nonatomic) TSCH3DLabelResource *label;
@property (retain, nonatomic) TSCH3DLabelResources *resources;
@property (retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline;
@property (retain, nonatomic) TSCH3DLabelsMeshRenderer *meshRenderer;
@property (retain, nonatomic) TSCH3DDataBufferResource *mesh;
@property (readonly, nonatomic) TSCH3DCamera *labelCamera;
@property (nonatomic) BOOL useLabelBounds;
@property (readonly, nonatomic) struct LabelRenderInfo { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledLabelSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledLabelFullSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledLabelRenderOffset; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledAlignmentPadding; } renderInfo;

+ (id)renderer;
+ (id)renderCacheKey;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)effects;
- (BOOL)cacheEnabled;
- (void)prepareCachedIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 string:(id)a1 alignmentPadding:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a2 width:(double)a3 bitmapContextInfo:(id)a4;
- (void)delegateDidSubmitLabel;
- (void)renderAtPosition:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 offset:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a1 alignment:(unsigned int)a2 offset2D:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a3 rotation:(float)a4 externalAttribute:(id)a5;
- (void)postrender:(id)a0;
- (void)prerender:(id)a0;
- (id)p_renderCacheKey;
- (const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)unitToWorld;
- (const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)worldToStage;
- (id)p_renderCacheID;
- (id)p_renderCacheFromScene:(id)a0 created:(BOOL *)a1 createIfAbsent:(BOOL)a2;
- (BOOL)hasCachedLabels;
- (BOOL)isCacheValid;
- (id)labelQuad;
- (BOOL)beginResources:(id)a0 expectedSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (void)endResources;

@end
