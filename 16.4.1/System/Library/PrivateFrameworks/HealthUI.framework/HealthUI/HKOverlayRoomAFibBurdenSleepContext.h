@interface HKOverlayRoomAFibBurdenSleepContext : HKOverlayRoomStackedContext

- (id)_generateNamedDataSourceWithTemplateDisplayType:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2;
- (id)_generateSleepSeriesWithTemplateDisplayType:(id)a0 applicationItems:(id)a1;
- (id)_generateStackedDisplayTypeWithApplicationItems:(id)a0 templateDisplayType:(id)a1 overlayChartController:(id)a2 sleepChartFormatter:(id)a3;
- (id)initWithApplicationItems:(id)a0 overlayChartController:(id)a1 sleepChartFormatter:(id)a2 primaryDisplayType:(id)a3 currentCalendarOverride:(id)a4;

@end
