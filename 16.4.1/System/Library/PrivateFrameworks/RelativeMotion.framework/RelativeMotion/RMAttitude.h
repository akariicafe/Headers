@interface RMAttitude : RMLogItem

@property (readonly, nonatomic) struct { double x; double y; double z; double w; } quaternion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithQuaternion:(struct { double x0; double x1; double x2; double x3; })a0 timestamp:(double)a1;

@end
