@class NWMTemperatureFormatter;

@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMTemperatureFormatter *formatter;

- (void).cxx_destruct;
- (id)dataFormatter;
- (Class)hourlyForecastViewClass;

@end
