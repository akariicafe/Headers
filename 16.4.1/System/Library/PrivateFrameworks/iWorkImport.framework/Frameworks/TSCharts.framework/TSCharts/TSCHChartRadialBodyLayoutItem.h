@class NSDictionary, NSArray, TSCHRadialBodyLayoutItemPathCache;

@interface TSCHChartRadialBodyLayoutItem : TSCHChartBodyLayoutItem {
    NSArray *_wedgeLayoutInfosInLocalSpace;
}

@property (retain) TSCHRadialBodyLayoutItemPathCache *p_pathCache;
@property (readonly, nonatomic) NSDictionary *wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;

- (void).cxx_destruct;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToMaintainLabelSameDistanceAwayFromWedge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wedgeElement:(id)a1;
- (struct CGSize { double x0; double x1; })bodySizeForOverhangSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calloutLineBoundingBoxForSeries:(unsigned long long)a0;
- (id)createAndOptimallyPlaceWedgeLayoutInfos;
- (id)createWedgeLayoutInfos;
- (id)defaultPieWedgeElementForSeriesModelCache:(id)a0;
- (id)defaultPieWedgeLayoutInfoForSeriesModelCache:(id)a0 pieLabels:(id)a1 combinedLabelTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)knobsOfElementForSeries:(unsigned long long)a0 withInnerRadius:(id)a1;
- (id)knobsWithRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 startAngle:(double)a2 midAngle:(double)a3 endAngle:(double)a4;
- (struct TSCHChartPieLabelGeometries { struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; } x0; struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; } x1; })labelGeometriesForRenderingLabelsForSeriesModelCache:(id)a0 topLabelType:(long long)a1 bottomLabelType:(long long)a2;
- (struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; })labelGeometryForRenderingLabelForSeriesModelCache:(id)a0 labelType:(long long)a1;
- (id)labelStringForType:(long long)a0 seriesModelCache:(id)a1;
- (struct CGPath { } *)newElementPathWithPercentage:(double)a0 radius:(double)a1 center:(struct CGPoint { double x0; double x1; })a2 startAngle:(double)a3 midAngle:(double)a4 endAngle:(double)a5 withInnerRadius:(id)a6;
- (id)newPathsForRenderingCalloutLineForSeries:(unsigned long long)a0 outStartLineEndPath:(id *)a1 outEndLineEndPath:(id *)a2 stroke:(id)a3 outStroke:(id *)a4 context:(struct CGContext { } *)a5 contextScale:(float)a6;
- (double)normalizedLabelDistanceFromWedgeTipForSeries:(id)a0;
- (id)optimizedWedgeLayoutInfoPlacementForWedgeLayoutInfos:(id)a0;
- (struct CGSize { double x0; double x1; })overhangSizeForBodySize:(struct CGSize { double x0; double x1; })a0;
- (void)p_collectMaxRatio:(double *)a0 maxLabelOverhang:(double *)a1 maxWedgeExplosion:(float *)a2 maxComboExplosion:(float *)a3;
- (id)pathCacheForSeries:(unsigned long long)a0 withInnerRadius:(id)a1;
- (const struct CGPath { } *)pathOfElementForSeries:(unsigned long long)a0 outWedgeCenterPoint:(struct CGPoint { double x0; double x1; } *)a1 withInnerRadius:(id)a2;
- (id)renderersWithRep:(id)a0;
- (id)seriesIndexToWedgeLayoutInfoMapWithWedgeLayoutInfos:(id)a0;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (struct CGSize { double x0; double x1; })titleSizeToUseForOverlapPreventionWithLabels;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingElementForSeries:(unsigned long long)a0 outElementSize:(struct CGSize { double x0; double x1; } *)a1 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 withInnerRadius:(id)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToShiftStraightLineLabelRectOutForEnableCalloutLineONSetting:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wedgeElement:(id)a1;
- (id)wedgeLayoutInfosInChartCoordinateSpace;
- (id)wedgeLayoutInfosInLocalSpaceForSeriesIndex;

@end
