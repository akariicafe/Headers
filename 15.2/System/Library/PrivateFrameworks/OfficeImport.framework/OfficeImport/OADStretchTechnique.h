@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillRect:(id)a0;
- (BOOL)isFillRectOverridden;
- (id)fillRect;

@end
