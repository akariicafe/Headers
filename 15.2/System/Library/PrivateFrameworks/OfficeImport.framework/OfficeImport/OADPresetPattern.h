@interface OADPresetPattern : OADPattern {
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)a0;
+ (id)namedBitmapDataForPresetPatternType:(int)a0;

- (id)initWithDefaults;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;

@end
