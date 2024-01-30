@class TSCH3DChartElementProperties;

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties {
    TSCH3DChartElementProperties *_original;
}

+ (id)propertiesWithProperties:(id)a0;

- (id)labels;
- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)chartTransform;
- (BOOL)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (id)elementsTransform;
- (void)applyChartElementsTransform:(void *)a0;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (id)renderingLightingModelForSeries:(id)a0;
- (id)texcoordsForSeries:(id)a0 index:(const void *)a1;
- (id)geometryForSeries:(id)a0 index:(const void *)a1;
- (id)boundsGeometryForSeries:(id)a0 index:(const void *)a1;
- (id)normalsForSeries:(id)a0 index:(const void *)a1;
- (id)getPropertiesOfType:(Class)a0;

@end
