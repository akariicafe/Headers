@interface CMAccelerometerData : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) struct { double x0; double x1; double x2; } acceleration;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAcceleration:(struct { float x0; float x1; float x2; })a0 andTimestamp:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
