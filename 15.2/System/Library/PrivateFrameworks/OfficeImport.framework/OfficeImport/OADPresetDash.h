@interface OADPresetDash : OADDash {
    char mType;
    unsigned char mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)type;
- (unsigned long long)hash;
- (void)setType:(char)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;
- (id)equivalentCustomDash;

@end
