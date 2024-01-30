@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject {
    long long _timeIndex;
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (BOOL)supportsSecureCoding;

- (long long)conditionCode;
- (id)temperature;
- (void).cxx_destruct;
- (id)chanceOfPrecipitation;
- (long long)timeIndex;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithConditionCodeIndex:(long long)a0 timeIndex:(long long)a1 temperature:(id)a2 chanceOfPrecipitation:(id)a3;

@end
