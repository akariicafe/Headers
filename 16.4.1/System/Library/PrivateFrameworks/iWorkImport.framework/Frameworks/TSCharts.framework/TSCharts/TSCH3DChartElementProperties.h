@class TSCH3DTexturePool;

@interface TSCH3DChartElementProperties : NSObject <NSCopying>

@property (readonly, nonatomic) TSCH3DTexturePool *pool;

+ (id)properties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)applyElementTransformToProcessor:(id)a0 series:(id)a1 index:(const void *)a2 propertyAccessor:(id)a3;
- (void)addTexcoordsToProcessor:(id)a0 series:(id)a1 index:(const void *)a2;
- (void)applyChartElementsTransform:(void *)a0;
- (void)applyChartElementsTransformToProcessor:(id)a0;
- (BOOL)applyCombinedTransform:(void *)a0 series:(id)a1 index:(const void *)a2 propertyAccessor:(id)a3;
- (BOOL)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (id)getPropertiesOfType:(Class)a0;
- (id)renderingLightingModelForSeries:(id)a0;

@end
