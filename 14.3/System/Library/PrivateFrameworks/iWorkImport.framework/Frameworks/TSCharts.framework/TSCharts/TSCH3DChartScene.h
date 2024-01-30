@class TSCH3DChartSceneInfo;

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo *mSceneInfo;
}

+ (BOOL)supportsValueAxisLabelAlignmentCaching;
+ (void)addObjectsToSceneWithSceneInfo:(id)a0;

- (void)dealloc;
- (id)scene;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })layoutSettings;
- (id)chartType;
- (id)seriesType;
- (id)chartInfo;
- (id)initWithSceneInfo:(id)a0;
- (void)addAllObjectsToScene;
- (void)addLabelsToScene;
- (void)addChartTitlesToScene;
- (void)adjustSceneSettings;
- (void)addObjectsToScene;
- (void)addAllLabelsToScene;
- (void)addSeriesObjectsToScene;

@end
