@interface STWeatherUnits : STSiriModelObject {
    long long _temperatureUnits;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)temperatureUnits;
- (id)_initWithTemperatureUnits:(long long)a0;

@end
