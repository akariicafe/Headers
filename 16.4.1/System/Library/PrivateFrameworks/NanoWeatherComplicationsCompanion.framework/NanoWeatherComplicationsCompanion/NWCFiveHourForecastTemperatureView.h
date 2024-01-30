@class NWMTemperatureFormatter;

@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMTemperatureFormatter *formatter;

- (void).cxx_destruct;
- (id)dataFormatter;
- (id)_setupViewBuilderForDevice:(id)a0;

@end
