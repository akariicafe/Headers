@class TSCH3DChartSceneAreaLayoutItem, TSCH3DScene;

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (readonly, nonatomic) TSCH3DChartSceneAreaLayoutItem *areaItem;
@property (readonly, nonatomic) TSCH3DScene *scene;
@property (readonly, nonatomic) const void *projectedBounds;
@property (readonly, nonatomic) BOOL hasProjectedBounds;

+ (id)propertiesThatInvalidateLayout;
+ (id)p_propertiesThatResetSeriesStorage;
+ (id)p_propertiesThatResetSceneProperties;
+ (void)upgradeSceneDepthSettingsForChartInfo:(id)a0 hasConstantDepth:(BOOL)a1 willModifyBlock:(id /* block */)a2;
+ (id)p_allScaleProperties;
+ (id)p_propertiesThatInvalidateShadows;

- (void)setLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (void)dealloc;
- (id)initWithChartInfo:(id)a0;
- (id)containingViewportVector;
- (id)infoChartScale;
- (BOOL)p_shouldClearSceneForLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (id)p_layoutTree;
- (void)p_ensureValidForInwardLayout;
- (void)p_resetSceneProperties;
- (void)setSeriesIndexedPieWedgeExplosions:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForResize;
- (void)layoutForResizingSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_resetSeriesStorage;
- (void)modelInvalidated:(id)a0;

@end
