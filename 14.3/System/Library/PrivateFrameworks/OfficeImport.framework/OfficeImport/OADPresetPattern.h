@interface OADPresetPattern : OADPattern {
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)a0;
+ (id)namedBitmapDataForPresetPatternType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;

@end
