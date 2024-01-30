@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (BOOL)scaled;
- (void)setAngle:(float)a0;
- (void)setScaled:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isAngleOverridden;
- (BOOL)isScaledOverridden;

@end
