@protocol _HKCardioFitnessClassificationContextDelegate;

@interface _HKCardioFitnessClassificationContext : _HKCardioFitnessOverlayContext

@property (weak, nonatomic) id<_HKCardioFitnessClassificationContextDelegate> delegate;

- (void).cxx_destruct;
- (void)updateContextItemForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (BOOL)canSelectOverlayContextItem:(id)a0 chartController:(id)a1;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (id)initWithMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 delegate:(id)a3;

@end
