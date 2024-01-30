@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (BOOL)supportsSecureCoding;

- (id)city;
- (void).cxx_destruct;
- (id)attributes;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithAttributes:(id)a0 city:(id)a1;

@end
