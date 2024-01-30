@class NSArray, WFNextHourPrecipitation, WFWeatherConditions, WFAirQualityConditions;

@interface WFAggregateCommonForecast : NSObject

@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations;
@property (retain, nonatomic) WFWeatherConditions *currentObservations;
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations;
@property (retain, nonatomic) NSArray *hourlyForecastedConditions;
@property (retain, nonatomic) NSArray *dailyForecastedConditions;
@property (retain, nonatomic) NSArray *dailyPollenForecastedConditions;
@property (retain, nonatomic) NSArray *severeWeatherEvents;
@property (retain, nonatomic) NSArray *changeForecasts;
@property (retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;

- (void).cxx_destruct;

@end
