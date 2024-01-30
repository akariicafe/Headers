@class OADColor;

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)blackFill;
+ (id)whiteFill;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)color;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (BOOL)isColorOverridden;
- (void)setStyleColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)usesPlaceholderColor;

@end
