@interface TSCH3DChartElementSceneObjectProcessGeometryOnlyItems : TSCH3DChartElementSceneObjectProcessItems

- (void)dealloc;
- (BOOL)useBoundsGeometry;
- (BOOL)geometryOnly;
- (void)processElementInfo:(id)a0 eachValue:(BOOL)a1;
- (BOOL)processEnumeratorSeries:(id)a0;
- (void)processDelayedItemsWithOpacity:(float)a0;

@end
