@class OADBlipRef;

@interface OADCustomPattern : OADPattern {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)blipRef;
- (BOOL)isBlipRefOverridden;
- (void)setBlipRef:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;

@end
