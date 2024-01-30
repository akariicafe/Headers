@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)city;
- (id)attributes;
- (void).cxx_destruct;
- (id)createResponse;
- (id)_initWithAttributes:(id)a0 city:(id)a1;

@end
