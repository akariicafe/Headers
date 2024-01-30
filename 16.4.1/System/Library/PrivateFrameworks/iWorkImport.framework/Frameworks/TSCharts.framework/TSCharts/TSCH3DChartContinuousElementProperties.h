@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {
    unsigned long long _maxLimitingSeries;
}

@property (readonly, nonatomic) float p_sageInterSetDepthGapProperty;
@property (readonly, nonatomic) long long seriesCount;
@property (readonly, nonatomic) float depthLimitFactor;
@property (readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)updateLabels;
- (BOOL)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (void)resetWithEnumerator:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })seriesSize;

@end
