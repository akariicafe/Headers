@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (readonly, nonatomic) const void *bounds;

+ (id)pipelineWithScene:(id)a0;
+ (id)pipelineWithScene:(id)a0 renderProcessor:(id)a1;

- (BOOL)run;
- (id)initWithScene:(id)a0;
- (id)boundsProcessor;
- (void)extend2DProjectedBounds:(const void *)a0;
- (void)get3DBounds:(id)a0;
- (void)getBounds:(id)a0;
- (void)getProjectedBounds:(id)a0;
- (id)initWithScene:(id)a0 renderProcessor:(id)a1;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (void)p_replaceSceneOfPipeline:(id)a0 replacement:(id)a1 duringBlock:(id /* block */)a2;
- (void)resetBounds;
- (void)runScene:(id)a0 objectBlock:(id /* block */)a1;
- (void)set2DProjectedRenderingMode:(BOOL)a0;
- (void)setObjectRenderMode:(int)a0;
- (BOOL)shouldSkipLabelsIfHidden;
- (BOOL)useIndividualBounds;

@end
