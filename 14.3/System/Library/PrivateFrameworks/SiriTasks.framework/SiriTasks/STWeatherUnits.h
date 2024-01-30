@interface STWeatherUnits : STSiriModelObject {
    long long _temperatureUnits;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)temperatureUnits;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithTemperatureUnits:(long long)a0;

@end
