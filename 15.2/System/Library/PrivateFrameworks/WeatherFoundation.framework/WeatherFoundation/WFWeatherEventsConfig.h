@class WFWeatherEventConfig;

@interface WFWeatherEventsConfig : NSObject <NSCopying>

@property (retain, nonatomic) WFWeatherEventConfig *changeInConditions;
@property (retain, nonatomic) WFWeatherEventConfig *nextHourPrecipitation;
@property (retain, nonatomic) WFWeatherEventConfig *severeWeather;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
