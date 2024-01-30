@interface CMDeviceOrientation : CMLogItem {
    int fOrientation;
}

@property (readonly, nonatomic) int orientation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOrientation:(int)a0 andTimestamp:(double)a1;
- (void)dealloc;
- (id)description;

@end
