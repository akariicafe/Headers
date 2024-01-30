@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode

@property (nonatomic) int rotationType;

- (void)getBounds:(id)a0;
- (double)p_radiusFromBounds:(const void *)a0 pivot:(const void *)a1;
- (void)p_submitGeometryForChartBounds:(const void *)a0 pivot:(const void *)a1 thicknessIndex:(unsigned long long)a2 pipeline:(id)a3;

@end
