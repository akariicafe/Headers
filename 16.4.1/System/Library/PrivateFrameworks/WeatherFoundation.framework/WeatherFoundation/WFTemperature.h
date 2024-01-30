@interface WFTemperature : NSObject <NSCopying, NSSecureCoding> {
    struct { double celsiusVal; double kelvinVal; double fahrenheitVal; } _temperatureValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double celsius;
@property (nonatomic) double fahrenheit;
@property (nonatomic) double kelvin;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_unitIsHydrated:(int)a0 outputValue:(out double *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setValue:(double)a0 forUnit:(int)a1;
- (id)initWithTemperatureUnit:(int)a0 value:(double)a1;
- (double)temperatureForUnit:(int)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTemperature:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)_resetTemperatureValues;
- (id)description;

@end
