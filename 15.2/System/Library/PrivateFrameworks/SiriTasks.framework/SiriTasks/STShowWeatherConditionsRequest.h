@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)city;
- (id)attributes;
- (id)_initWithAttributes:(id)a0 city:(id)a1;

@end
