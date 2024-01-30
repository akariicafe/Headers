@class HKGraphSeries, NSString;

@interface WDAudioExposureDetailViewController : WDDisplayTypeDetailViewController <HKInteractiveChartViewObserver>

@property (retain, nonatomic) HKGraphSeries *LEQSeries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (id)initWithDisplayType:(id)a0 displayCategory:(id)a1 profile:(id)a2 displayDate:(id)a3;
- (void)_installLEQOverlayForDisplayType:(id)a0 unitPreferenceController:(id)a1 healthStore:(id)a2;
- (id)_buildLEQDisplayTypeForDisplayType:(id)a0 unitPreferenceController:(id)a1 healthStore:(id)a2;
- (id)_buildLEQSeriesForDisplayType:(id)a0 unitPreferenceController:(id)a1 healthStore:(id)a2;
- (long long)_dataTypeCodeForAudioDisplayType:(id)a0;
- (id)_lineSeriesForDisplayType:(id)a0;
- (id)_buildLEQChartCacheWithUnitPreferenceController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id)_buildLEQPresentationStyle;
- (id)_buildLEQDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;

@end
