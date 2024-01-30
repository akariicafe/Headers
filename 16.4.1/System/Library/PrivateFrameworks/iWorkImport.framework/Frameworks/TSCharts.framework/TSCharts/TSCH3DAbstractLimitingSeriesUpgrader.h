@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {
    TSCHChartInfo *_chartInfo;
}

@property (copy, nonatomic) id /* block */ willModifyBlock;

+ (BOOL)chartTypeUsesSeriesLimiting:(id)a0;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)a0 chartType:(id)a1 fromOldLimitingSeries:(unsigned long long)a2 toNewLimitingSeries:(unsigned long long)a3;
+ (id)upgraderWithChartInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithChartInfo:(id)a0;
- (void)configureScene:(id)a0;
- (id)adjustedScaleFromLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; } *)a0 toLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; } *)a1;
- (id)configuredSceneWithLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)a0;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; } *)a0 toLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; } *)a1;
- (void)mutateInfoWithContainingViewport:(id)a0 scene:(id)a1;
- (void)mutateInfoWithMutations:(id)a0;
- (unsigned long long)numberOfSeries;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })oldLayoutSettings;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })p_oldLayoutSettingsForSpice:(BOOL)a0;
- (void)upgradeForSpice:(BOOL)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })upgradedLayoutSettings;

@end
