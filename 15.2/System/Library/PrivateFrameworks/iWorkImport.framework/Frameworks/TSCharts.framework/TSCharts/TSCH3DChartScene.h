@class TSCH3DChartSceneInfo;

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo *_sceneInfo;
}

+ (BOOL)supportsValueAxisLabelAlignmentCaching;
+ (void)addObjectsToSceneWithSceneInfo:(id)a0;

- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })layoutSettings;
- (void).cxx_destruct;
- (id)scene;
- (id)chartType;
- (id)seriesType;
- (id)chartInfo;
- (id)styleProvidingSource;
- (id)initWithSceneInfo:(id)a0;
- (void)addAllObjectsToScene;
- (void)addLabelsToScene;
- (void)addChartTitlesToScene;
- (void)adjustSceneSettings;
- (void)addObjectsToScene;
- (void)addAllLabelsToScene;
- (void)addSeriesObjectsToScene;

@end
