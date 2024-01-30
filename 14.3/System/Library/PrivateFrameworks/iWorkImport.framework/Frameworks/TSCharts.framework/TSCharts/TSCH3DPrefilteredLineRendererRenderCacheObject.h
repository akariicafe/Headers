@class TSCH3DStrokePatternTexture;

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {
    TSCH3DStrokePatternTexture *mStrokeTexture;
}

@property (nonatomic) BOOL didRenderOnce;

- (id)init;
- (void)dealloc;
- (id)p_box;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (id)p_geometry;
- (id)p_texcoords;
- (id)p_normals;
- (id)p_diffuseTexcoords;
- (id)p_originalGeometry;
- (void)submitResourcesWithLineRenderer:(id)a0 setting:(id)a1;
- (void)renderWithLineRenderer:(id)a0 setting:(id)a1 fromVertex:(const struct PrefilteredLineVertexProperties { struct tvec3<float> *x0; struct tvec3<float> *x1; struct tvec4<float> *x2; int x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x4; } *)a2 toVertex:(const struct PrefilteredLineVertexProperties { struct tvec3<float> *x0; struct tvec3<float> *x1; struct tvec4<float> *x2; int x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x4; } *)a3;

@end
