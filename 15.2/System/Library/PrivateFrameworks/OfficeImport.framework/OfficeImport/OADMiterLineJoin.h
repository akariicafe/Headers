@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    unsigned char mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (void)setLimit:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (float)limit;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isLimitOverridden;

@end
