@class NSArray, STWeatherAttributes, STCity;

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest {
    STWeatherAttributes *_currentAttributes;
    NSArray *_hourlyAttributes;
    STCity *_city;
    long long _startHour;
    long long _forecastType;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)forecastType;
- (id)city;
- (void).cxx_destruct;
- (id)createResponse;
- (id)currentAttributes;
- (long long)startHour;
- (id)_initWithCurrentAttributes:(id)a0 hourlyAttributes:(id)a1 city:(id)a2 startHour:(long long)a3 forecastType:(long long)a4;
- (id)hourlyAttributes;

@end
