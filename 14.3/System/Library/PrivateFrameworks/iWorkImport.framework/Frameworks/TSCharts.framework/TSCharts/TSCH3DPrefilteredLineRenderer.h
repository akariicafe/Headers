@class TSCH3DSceneRenderPipeline, TSCH3DOrderedDictionary;

@interface TSCH3DPrefilteredLineRenderer : NSObject {
    TSCH3DOrderedDictionary *mCacheObjects;
}

@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } modelMatrix;
@property (readonly, nonatomic) struct tmat3x3<float> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } value[3]; } normalMatrix;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } projection;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } normalizedProjection;
@property (readonly, nonatomic) struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } mMin; struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } mMax; } viewport;
@property (readonly, nonatomic) TSCH3DSceneRenderPipeline *pipeline;

+ (id)renderer;
+ (id)renderCacheKey;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)beginWithPipeline:(id)a0;
- (void)renderLineBufferWithSetting:(id)a0 vertices:(id)a1 normals:(id)a2 diffuseTexcoords:(id)a3;
- (void)endWithDidGenerateShaderEffectsBlock:(id /* block */)a0;
- (void)p_setupShaderEffectsForSetting:(id)a0;
- (id)p_renderCacheKey;
- (id)p_renderCacheIDFromSetting:(id)a0;
- (BOOL)p_shouldRenderWithSetting:(id)a0 returningCacheObject:(id *)a1;
- (void)renderWithSetting:(id)a0 fromVertex:(const struct PrefilteredLineVertexProperties { struct tvec3<float> *x0; struct tvec3<float> *x1; struct tvec4<float> *x2; int x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x4; } *)a1 toVertex:(const struct PrefilteredLineVertexProperties { struct tvec3<float> *x0; struct tvec3<float> *x1; struct tvec4<float> *x2; int x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x4; } *)a2;

@end
