@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_highTemperature;
    NSNumber *_lowTemperature;
}

+ (BOOL)supportsSecureCoding;

- (id)temperature;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)highTemperature;
- (long long)conditionCode;
- (id)lowTemperature;
- (id)_initWithConditionCode:(long long)a0 temperature:(id)a1 highTemperature:(id)a2 lowTemperature:(id)a3;

@end
