@interface HKSleepPeriodDaySeries : HKSleepPeriodSeries

- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)addGoalLinePathsToCoordinate:(id)a0 upperGoalLinePath:(id)a1 upperGoalMarkerPoints:(id)a2 previousUpperGoalLinePoint:(id)a3 lowerGoalLinePath:(id)a4 lowerGoalMarkerPoints:(id)a5 previousLowerGoalLinePoint:(id)a6 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;
- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)a0;

@end
