@class CMAttitude;

@interface CMPose : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } translation;
@property (readonly, nonatomic) double consumedAuxTimestamp;
@property (readonly, nonatomic) double receivedAuxTimestamp;
@property (readonly, nonatomic) double machAbsTimestamp;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPose:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { double x0; double x1; double x2; } x1; double x2; double x3; double x4; })a0 timestamp:(double)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToPose:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
