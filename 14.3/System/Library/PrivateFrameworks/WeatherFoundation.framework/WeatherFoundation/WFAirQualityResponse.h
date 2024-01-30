@class NSData, WFAirQualityConditions;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
