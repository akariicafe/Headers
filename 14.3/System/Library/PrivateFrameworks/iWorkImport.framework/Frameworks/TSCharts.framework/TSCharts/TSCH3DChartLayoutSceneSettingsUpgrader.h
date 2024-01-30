@class NSValue, TSCH3DChartLayout;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    TSCH3DChartLayout *mChartLayout;
    BOOL mIsMutatedForSceneSettings;
    NSValue *mInfoGeometryOffset;
}

@property (nonatomic) BOOL hasConstantDepth;

- (void)dealloc;
- (id)sceneResetWithLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oldResizingFrame;
- (id)containingViewportByResizingScene:(id)a0 toResizingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)upgradeForSpice:(BOOL)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })oldLayoutSettings;
- (void)mutateInfoWithContainingViewport:(id)a0 scene:(id)a1;
- (void)updateInfoGeometryIfNecessary;

@end
