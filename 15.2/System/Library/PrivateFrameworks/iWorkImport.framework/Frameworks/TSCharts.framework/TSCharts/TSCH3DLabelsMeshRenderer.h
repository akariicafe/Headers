@interface TSCH3DLabelsMeshRenderer : TSCH3DSceneRenderCacheObject

+ (id)renderer;

- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (void)beginResources:(id)a0 samples:(float)a1;
- (void)submitResourcesWithProcessor:(id)a0;

@end
