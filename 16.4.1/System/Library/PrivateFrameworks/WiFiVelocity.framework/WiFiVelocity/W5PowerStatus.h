@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long powerSourceType;
@property (nonatomic) int batteryWarningLevel;
@property (nonatomic) double internalBatteryLevel;
@property (nonatomic) unsigned int powerStateCaps;

- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToPowerStatus:(id)a0;

@end
