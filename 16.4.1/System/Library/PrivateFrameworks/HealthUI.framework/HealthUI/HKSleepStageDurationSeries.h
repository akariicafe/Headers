@class NSLock, NSNumber, NSArray;

@interface HKSleepStageDurationSeries : HKSleepDurationSeries <HKSleepStageCategoryHighlightable>

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (retain, nonatomic) NSNumber *highlightedSleepStageStorage;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage;
@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (copy, nonatomic) NSArray *sleepStageFillStyles;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)_rebuildFillStyles;
- (void)addGoalLinePathsToCoordinate:(id)a0 goalLinePath:(id)a1 goalLineMarkerPoints:(id)a2 previousCoordinateGoal:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (BOOL)hideAsleepData;
- (BOOL)hideInBedData;

@end
