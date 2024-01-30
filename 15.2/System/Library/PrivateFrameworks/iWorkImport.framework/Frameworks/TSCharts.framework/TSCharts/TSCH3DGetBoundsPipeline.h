@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (readonly, nonatomic) const void *bounds;

+ (id)pipelineWithScene:(id)a0 renderProcessor:(id)a1;
+ (id)pipelineWithScene:(id)a0;

- (id)initWithScene:(id)a0;
- (BOOL)run;
- (void)setObjectRenderMode:(int)a0;
- (void)extend2DProjectedBounds:(const void *)a0;
- (void)resetBounds;
- (id)initWithScene:(id)a0 renderProcessor:(id)a1;
- (id)boundsProcessor;
- (BOOL)useIndividualBounds;
- (void)set2DProjectedRenderingMode:(BOOL)a0;
- (void)getBounds:(id)a0;
- (void)runScene:(id)a0 objectBlock:(id /* block */)a1;
- (void)get3DBounds:(id)a0;
- (void)getProjectedBounds:(id)a0;
- (void)p_replaceSceneOfPipeline:(id)a0 replacement:(id)a1 duringBlock:(id /* block */)a2;
- (BOOL)shouldSkipLabelsIfHidden;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;

@end
