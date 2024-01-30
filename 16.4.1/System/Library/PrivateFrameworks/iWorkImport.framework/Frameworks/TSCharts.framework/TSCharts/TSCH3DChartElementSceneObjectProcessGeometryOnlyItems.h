@interface TSCH3DChartElementSceneObjectProcessGeometryOnlyItems : TSCH3DChartElementSceneObjectProcessItems

- (void)dealloc;
- (void)processDelayedItemsWithOpacity:(float)a0;
- (BOOL)geometryOnly;
- (void)processElementInfo:(id)a0 eachValue:(BOOL)a1;
- (BOOL)processEnumeratorSeries:(id)a0;
- (BOOL)useBoundsGeometry;

@end
