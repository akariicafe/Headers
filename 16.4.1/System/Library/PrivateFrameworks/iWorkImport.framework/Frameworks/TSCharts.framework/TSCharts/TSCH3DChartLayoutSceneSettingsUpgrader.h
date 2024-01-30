@class NSValue, TSCH3DChartLayout;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    TSCH3DChartLayout *_chartLayout;
    BOOL _isMutatedForSceneSettings;
    NSValue *_infoGeometryOffset;
}

@property (nonatomic) BOOL hasConstantDepth;

- (void)dealloc;
- (void).cxx_destruct;
- (id)containingViewportByResizingScene:(id)a0 toResizingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mutateInfoWithContainingViewport:(id)a0 scene:(id)a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })oldLayoutSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (void)updateInfoGeometryIfNecessary;
- (void)upgradeForSpice:(BOOL)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

@end
