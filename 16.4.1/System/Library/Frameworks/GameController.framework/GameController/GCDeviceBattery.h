@interface GCDeviceBattery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float batteryLevel;
@property (nonatomic) long long batteryState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)_setBatteryLevel:(float)a0;
- (void)_setBatteryState:(long long)a0;
- (id)initWithLevel:(float)a0 batteryState:(long long)a1;
- (id)initWithLevel:(unsigned char)a0 isCharging:(BOOL)a1;

@end
