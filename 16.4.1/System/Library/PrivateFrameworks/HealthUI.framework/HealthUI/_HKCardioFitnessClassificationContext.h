@protocol _HKCardioFitnessClassificationContextDelegate;

@interface _HKCardioFitnessClassificationContext : _HKCardioFitnessOverlayContext

@property (weak, nonatomic) id<_HKCardioFitnessClassificationContextDelegate> delegate;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)canSelectOverlayContextItem:(id)a0 isDeselecting:(BOOL)a1 timeScope:(long long)a2 chartController:(id)a3;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)initWithMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 delegate:(id)a3;

@end
