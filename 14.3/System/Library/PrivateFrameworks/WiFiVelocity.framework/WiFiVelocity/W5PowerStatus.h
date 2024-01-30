@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long powerSourceType;
@property (nonatomic) int batteryWarningLevel;
@property (nonatomic) double internalBatteryLevel;
@property (nonatomic) unsigned int powerStateCaps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPowerStatus:(id)a0;

@end
