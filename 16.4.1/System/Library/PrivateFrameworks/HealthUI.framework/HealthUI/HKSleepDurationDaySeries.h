@class NSLock, NSCalendar, NSNumber;

@interface HKSleepDurationDaySeries : HKSleepDurationSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSNumber *highlightedSleepValueStorage;
@property (retain, nonatomic) NSNumber *highlightedSleepValue;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)_rebuildFillStyles;
- (void)addGoalLinePathsToCoordinate:(id)a0 goalLinePath:(id)a1 goalLineMarkerPoints:(id)a2 previousCoordinateGoal:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (BOOL)hideAsleepData;
- (BOOL)hideInBedData;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)a0;

@end
