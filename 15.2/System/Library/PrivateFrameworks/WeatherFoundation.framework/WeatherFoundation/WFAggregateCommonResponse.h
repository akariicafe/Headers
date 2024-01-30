@class NSArray, WFNextHourPrecipitation, NSData, WFWeatherConditions, WFAirQualityConditions;

@interface WFAggregateCommonResponse : WFResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations;
@property (retain, nonatomic) WFWeatherConditions *currentObservations;
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations;
@property (retain, nonatomic) NSArray *hourlyForecastedConditions;
@property (retain, nonatomic) NSArray *dailyForecastedConditions;
@property (retain, nonatomic) NSArray *dailyPollenForecastedConditions;
@property (retain, nonatomic) NSArray *changeForecasts;
@property (retain, nonatomic) NSArray *severeWeatherEvents;
@property (retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;
@property (nonatomic) BOOL responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
