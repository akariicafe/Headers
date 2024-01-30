@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate

@property (readonly, nonatomic) HKLineSeries *audioOverlayLineSeries;

- (void).cxx_destruct;
- (void)_enumerateAudioExposureChartPoints:(id)a0 withBlock:(id /* block */)a1;
- (id)alternateLineSeries;
- (id)formatterForTimescope:(long long)a0;
- (id)initWithCustomDataSource:(id)a0 primaryDisplayType:(id)a1;
- (id)valueContextString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;

@end
