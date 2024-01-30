@interface CMGyroData : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) struct { double x0; double x1; double x2; } rotationRate;

+ (BOOL)supportsSecureCoding;

- (id)initWithRotationRate:(struct { float x0; float x1; float x2; })a0 andTimestamp:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
