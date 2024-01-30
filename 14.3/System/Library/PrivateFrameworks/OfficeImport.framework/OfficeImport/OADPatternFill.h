@class OADPattern, OADColor;

@interface OADPatternFill : OADFill {
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)bgColor;
- (id)fgColor;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)setBgColor:(id)a0;
- (void)setFgColor:(id)a0;
- (id)pattern;
- (void)setParent:(id)a0;
- (void)setPattern:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isFgColorOverridden;
- (BOOL)isBgColorOverridden;
- (BOOL)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)a0;

@end
