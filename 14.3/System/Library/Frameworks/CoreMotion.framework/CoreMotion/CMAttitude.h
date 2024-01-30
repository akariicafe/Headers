@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } rotationMatrix;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } quaternion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQuaternion:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setQuaternion:(struct { double x0; double x1; double x2; double x3; })a0;
- (BOOL)isEqual:(id)a0;
- (void)multiplyByInverseOfAttitude:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
