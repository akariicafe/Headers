@interface OADTileTechnique : OADImageFillTechnique {
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (int)alignment;
- (void)setAlignment:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (float)scaleX;
- (float)scaleY;
- (float)offsetX;
- (float)offsetY;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)setFlipMode:(int)a0;
- (void)setOffsetX:(float)a0;
- (void)setOffsetY:(float)a0;
- (void)setScaleX:(float)a0;
- (void)setScaleY:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isFlipModeOverridden;
- (int)flipMode;
- (BOOL)isOffsetXOverridden;
- (BOOL)isOffsetYOverridden;
- (BOOL)isScaleXOverridden;
- (BOOL)isScaleYOverridden;
- (BOOL)isAlignmentOverridden;

@end
