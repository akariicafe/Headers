@class OADImageFillTechnique, OADBlipRef, OADRelativeRect;

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (int)dpi;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)technique;
- (unsigned long long)hash;
- (void)setSourceRect:(id)a0;
- (id)color;
- (void)setTechnique:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)blipRef;
- (void)setDpi:(int)a0;
- (id)sourceRect;
- (void)setParent:(id)a0;
- (BOOL)isBlipRefOverridden;
- (BOOL)isSourceRectOverridden;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setBlipRef:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)rotateWithShape;
- (BOOL)isDpiOverridden;
- (BOOL)isTechniqueOverridden;

@end
