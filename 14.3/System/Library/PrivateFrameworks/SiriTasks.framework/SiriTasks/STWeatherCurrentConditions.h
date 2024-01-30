@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_highTemperature;
    NSNumber *_lowTemperature;
}

+ (BOOL)supportsSecureCoding;

- (long long)conditionCode;
- (id)temperature;
- (void).cxx_destruct;
- (id)highTemperature;
- (id)lowTemperature;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithConditionCode:(long long)a0 temperature:(id)a1 highTemperature:(id)a2 lowTemperature:(id)a3;

@end
