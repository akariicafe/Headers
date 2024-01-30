@class NWMPrecipitationFormatter;

@interface NWCFiveHourForecastPrecipitationView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMPrecipitationFormatter *formatter;

- (void).cxx_destruct;
- (id)dataFormatter;
- (id)_setupViewBuilderForDevice:(id)a0;

@end
