@class NSArray, STWeatherAttributes, STCity;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest {
    STWeatherAttributes *_currentAttributes;
    NSArray *_dailyAttributes;
    STCity *_city;
    long long _startWeekday;
}

+ (BOOL)supportsSecureCoding;

- (id)city;
- (id)currentAttributes;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCurrentAttributes:(id)a0 dailyAttributes:(id)a1 city:(id)a2 startWeekday:(long long)a3;
- (id)dailyAttributes;
- (long long)startWeekday;

@end
