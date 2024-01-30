@interface OADPresetDash : OADDash {
    char mType;
    unsigned char mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(char)a0;
- (unsigned long long)hash;
- (char)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)equivalentCustomDash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;

@end
