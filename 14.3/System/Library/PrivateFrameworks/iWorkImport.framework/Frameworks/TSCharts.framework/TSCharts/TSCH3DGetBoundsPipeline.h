@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (readonly, nonatomic) const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } x0; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } x2; struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { struct box<glm::detail::tvec3<float> > *x0; struct box<glm::detail::tvec3<float> > *x1; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { struct box<glm::detail::tvec3<float> > *x0; } x2; } x3; } *bounds;

+ (id)pipelineWithScene:(id)a0 renderProcessor:(id)a1;
+ (id)pipelineWithScene:(id)a0;

- (BOOL)run;
- (id)initWithScene:(id)a0;
- (void)setObjectRenderMode:(int)a0;
- (void)extend2DProjectedBounds:(const struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; } *)a0;
- (void)resetBounds;
- (id)initWithScene:(id)a0 renderProcessor:(id)a1;
- (id)boundsProcessor;
- (BOOL)useIndividualBounds;
- (void)set2DProjectedRenderingMode:(BOOL)a0;
- (void)getBounds:(id)a0;
- (void)runScene:(id)a0 selector:(SEL)a1;
- (void)get3DBounds:(id)a0;
- (void)getProjectedBounds:(id)a0;
- (void)p_replaceSceneOfPipeline:(id)a0 replacement:(id)a1 duringBlock:(id /* block */)a2;
- (BOOL)shouldSkipLabelsIfHidden;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;

@end
