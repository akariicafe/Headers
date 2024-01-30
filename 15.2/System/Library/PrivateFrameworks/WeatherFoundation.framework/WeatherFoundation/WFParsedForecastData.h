@class NSArray, WFNextHourPrecipitation, NSData, WFWeatherConditions, WFAirQualityConditions;

@interface WFParsedForecastData : NSObject

@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations;
@property (retain, nonatomic) WFWeatherConditions *currentConditions;
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations;
@property (retain, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) NSArray *pollenForecasts;
@property (retain, nonatomic) NSArray *changeForecasts;
@property (retain, nonatomic) NSArray *severeWeatherEvents;
@property (retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;

- (id)objectForForecastType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
