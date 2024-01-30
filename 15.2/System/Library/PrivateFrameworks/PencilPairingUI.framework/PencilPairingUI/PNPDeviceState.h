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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
