@interface SCNBillboardConstraint : SCNConstraint {
    BOOL _preserveScale;
}

@property (nonatomic) unsigned long long freeAxes;

+ (BOOL)supportsSecureCoding;
+ (id)billboardConstraint;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPreserveScale:(BOOL)a0;
- (BOOL)preserveScale;

@end
