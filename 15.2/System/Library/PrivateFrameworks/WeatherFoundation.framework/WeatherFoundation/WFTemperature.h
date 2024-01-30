@interface WFTemperature : NSObject <NSCopying, NSSecureCoding> {
    struct { double celsiusVal; double kelvinVal; double fahrenheitVal; } _temperatureValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double celsius;
@property (nonatomic) double fahrenheit;
@property (nonatomic) double kelvin;

- (id)initWithTemperatureUnit:(int)a0 value:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)_unitIsHydrated:(int)a0 outputValue:(out double *)a1;
- (BOOL)isEqual:(id)a0;
- (void)_resetTemperatureValues;
- (id)init;
- (double)temperatureForUnit:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToTemperature:(id)a0;
- (void)_setValue:(double)a0 forUnit:(int)a1;

@end
