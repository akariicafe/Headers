@interface SCNBillboardConstraint : SCNConstraint {
    BOOL _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (BOOL)supportsSecureCoding;
+ (id)billboardConstraint;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setPreserveScale:(BOOL)a0;
- (BOOL)preserveScale;

@end
