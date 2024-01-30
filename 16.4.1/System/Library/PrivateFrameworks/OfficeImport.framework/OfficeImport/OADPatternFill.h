@class OADPattern, OADColor;

@interface OADPatternFill : OADFill {
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pattern;
- (void)setParent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setColor:(id)a0;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)bgColor;
- (id)fgColor;
- (void)setBgColor:(id)a0;
- (void)setFgColor:(id)a0;
- (void)setPattern:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isBgColorOverridden;
- (BOOL)isFgColorOverridden;
- (BOOL)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)a0;
- (void)removeUnnecessaryOverrides;
- (void)setStyleColor:(id)a0;

@end
