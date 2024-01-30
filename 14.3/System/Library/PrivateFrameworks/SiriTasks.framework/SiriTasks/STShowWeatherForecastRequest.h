@class NSArray, STWeatherUnits, STWeatherCurrentConditions, STCity;

@interface STShowWeatherForecastRequest : AFSiriRequest {
    STWeatherCurrentConditions *_currentConditions;
    NSArray *_hourlyForecasts;
    STCity *_city;
    STWeatherUnits *_units;
    long long _forecastType;
}

+ (BOOL)supportsSecureCoding;

- (id)hourlyForecasts;
- (id)city;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (long long)forecastType;
- (id)units;
- (id)currentConditions;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCurrentConditions:(id)a0 hourlyForecasts:(id)a1 city:(id)a2 units:(id)a3 forecastType:(long long)a4;

@end
