@class NWMPrecipitationFormatter;

@interface NWCFiveHourForecastPrecipitationView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMPrecipitationFormatter *formatter;

- (void).cxx_destruct;
- (id)dataFormatter;
- (Class)hourlyForecastViewClass;

@end
