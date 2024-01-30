@interface TSCH3DChartSelectedElementHighlightSceneObject : TSCH3DSceneObject <TSCH3DSceneObjectDelegator>

+ (id)propertiesForScene:(id)a0;
+ (void)setHighlightColor:(id)a0 scene:(id)a1;
+ (void)setSelectedSeriesIndex:(unsigned long long)a0 scene:(id)a1;

- (void)render:(id)a0;
- (void)getBounds:(id)a0;
- (id)makeDelegateWithScene:(id)a0;
- (id)makeDelegateWithSceneObject:(id)a0 scene:(id)a1;
- (id)p_calculateEdgeVerticesForPipeline:(id)a0;

@end
