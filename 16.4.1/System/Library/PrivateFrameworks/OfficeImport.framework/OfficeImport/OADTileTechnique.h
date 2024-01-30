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
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (float)scaleX;
- (float)scaleY;
- (void)setScaleX:(float)a0;
- (void)setScaleY:(float)a0;
- (float)offsetX;
- (float)offsetY;
- (void)setOffsetX:(float)a0;
- (void)setOffsetY:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (int)flipMode;
- (BOOL)isAlignmentOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isOffsetXOverridden;
- (BOOL)isOffsetYOverridden;
- (BOOL)isScaleXOverridden;
- (BOOL)isScaleYOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFlipMode:(int)a0;

@end
