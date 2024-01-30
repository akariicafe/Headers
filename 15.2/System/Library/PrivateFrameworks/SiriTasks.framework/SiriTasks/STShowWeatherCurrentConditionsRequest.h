@class STWeatherCurrentConditions, STCity, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {
    STWeatherCurrentConditions *_currentConditions;
    STCity *_city;
    STWeatherUnits *_units;
}

+ (BOOL)supportsSecureCoding;

- (id)currentConditions;
- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)units;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)city;
- (id)_initWithCurrentConditions:(id)a0 city:(id)a1 units:(id)a2;

@end
