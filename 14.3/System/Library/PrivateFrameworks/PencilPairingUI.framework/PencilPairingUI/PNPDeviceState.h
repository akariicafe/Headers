@class NSString;

@interface PNPDeviceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isLowPower;
@property (readonly, nonatomic) BOOL isOnLeftOrRightSide;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double batteryLevel;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) BOOL batteryLevelUnknown;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
