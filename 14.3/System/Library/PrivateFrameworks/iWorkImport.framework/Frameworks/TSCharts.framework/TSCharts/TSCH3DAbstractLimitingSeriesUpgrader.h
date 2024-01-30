@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {
    TSCHChartInfo *mChartInfo;
}

@property (copy, nonatomic) id /* block */ willModifyBlock;

+ (id)upgraderWithChartInfo:(id)a0;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)a0 chartType:(id)a1 fromOldLimitingSeries:(unsigned long long)a2 toNewLimitingSeries:(unsigned long long)a3;
+ (BOOL)chartTypeUsesSeriesLimiting:(id)a0;

- (void)dealloc;
- (id)initWithChartInfo:(id)a0;
- (unsigned long long)numberOfSeries;
- (void)upgradeForSpice:(BOOL)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })oldLayoutSettings;
- (void)mutateInfoWithContainingViewport:(id)a0 scene:(id)a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })p_oldLayoutSettingsForSpice:(BOOL)a0;
- (void)configureScene:(id)a0;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)a0;
- (void)mutateInfoWithMutations:(id)a0;
- (id)adjustedScaleFromLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; } *)a0 toLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; } *)a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })upgradedLayoutSettings;
- (id)configuredSceneWithLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a0;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; } *)a0 toLayoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; } *)a1;

@end
