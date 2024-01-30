@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)fillToRect;
- (void)setFillToRect:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;

@end
