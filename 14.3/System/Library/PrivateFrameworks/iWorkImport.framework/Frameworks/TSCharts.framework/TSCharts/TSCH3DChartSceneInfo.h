@class TSCHChartSeriesType, TSCHChartInfo, TSCHChartType, TSCH3DScene;

@interface TSCH3DChartSceneInfo : NSObject <NSCopying>

@property (readonly, retain, nonatomic) TSCH3DScene *scene;
@property (readonly, retain, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, retain, nonatomic) TSCHChartType *chartType;
@property (readonly, retain, nonatomic) TSCHChartSeriesType *seriesType;
@property (readonly, nonatomic) struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;

+ (id)infoWithScene:(id)a0 chartInfo:(id)a1 chartType:(id)a2 seriesType:(id)a3 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithScene:(id)a0 chartInfo:(id)a1 chartType:(id)a2 seriesType:(id)a3 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a4;

@end
