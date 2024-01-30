@class NSString;

@interface NIBluetoothSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double rssi;
@property (readonly) NSString *identifier;
@property (readonly) NSString *model;
@property (readonly) int channel;
@property (readonly) double machContinuousTimeSeconds;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBluetoothSample:(id)a0;
- (id)initWithRSSI:(double)a0 identifier:(id)a1 model:(id)a2 channel:(int)a3 machContinuousTimeSeconds:(double)a4;

@end
