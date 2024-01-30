@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int temperatureUnit;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
