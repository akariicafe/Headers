@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (float)angle;
- (void)setScaled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setAngle:(float)a0;
- (BOOL)scaled;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isAngleOverridden;
- (BOOL)isScaledOverridden;

@end
