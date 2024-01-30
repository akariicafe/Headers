@class OADPattern, OADColor;

@interface OADPatternFill : OADFill {
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;

- (id)pattern;
- (id)initWithDefaults;
- (void)setParent:(id)a0;
- (id)bgColor;
- (id)fgColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void)setBgColor:(id)a0;
- (void)setFgColor:(id)a0;
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
